#include <WiFi.h>
#include <WebServer.h>

const int IN1 = 13;
const int IN2 = 14;
const int IN3 = 32;
const int IN4 = 33;

const char* wifiName = "Kenils-RC-Car";
const char* wifiPassword = "kenil1234";

WebServer server(80);

unsigned long lastCommand = 0;

const bool reverseLeft = false;
const bool reverseRight = false;

void setMotor(int pinA, int pinB, int direction, bool reversed) {
  if (reversed) direction = -direction;

  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);

  if (direction > 0) digitalWrite(pinA, HIGH);
  if (direction < 0) digitalWrite(pinB, HIGH);
}

void drive(int left, int right) {
  setMotor(IN1, IN2, left, reverseLeft);
  setMotor(IN3, IN4, right, reverseRight);
}

const char page[] PROGMEM = R"HTML(
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <title>Kenil's RC Car</title>
  <style>
    body {
      margin: 0;
      min-height: 100vh;
      background: #f5f5f5;
      color: #222;
      font-family: Arial, sans-serif;
      text-align: center;
    }
    h1 { margin: 60px 15px 12px; }
    p { color: #555; }
    .controls {
      display: grid;
      grid-template-columns: repeat(3, 100px);
      gap: 10px;
      justify-content: center;
      margin: 35px auto;
    }
    button {
      height: 85px;
      border: 1px solid #ccc;
      border-radius: 12px;
      background: white;
      color: #222;
      font-size: 16px;
      font-weight: bold;
      touch-action: none;
      user-select: none;
      -webkit-user-select: none;
      -webkit-touch-callout: none;
      cursor: pointer;
    }
    button:active { background: #ddd; }
    .forward { grid-column: 2; }
    .left { grid-column: 1; grid-row: 2; }
    .stop { grid-column: 2; grid-row: 2; background: #ffd9d9; }
    .right { grid-column: 3; grid-row: 2; }
    .back { grid-column: 2; grid-row: 3; }
  </style>
</head>
<body>
  <h1>Kenil's RC Car</h1>
  <p>Hold a direction to drive. Release to stop.</p>

  <div class="controls">
    <button class="forward" data-dir="forward">Forward</button>
    <button class="left" data-dir="left">Left</button>
    <button class="stop" id="stop">STOP</button>
    <button class="right" data-dir="right">Right</button>
    <button class="back" data-dir="backward">Backward</button>
  </div>

  <p id="status">Stopped</p>

  <script>
    let direction = "stop";
    let busy = false;
    let activePointer = null;
    const status = document.getElementById("status");

    async function sendCommand() {
      if (busy) return;
      busy = true;
      const sentDirection = direction;
      const controller = new AbortController();
      const timer = setTimeout(() => controller.abort(), 800);

      try {
        const response = await fetch("/drive?dir=" + sentDirection, {
          method: "POST",
          cache: "no-store",
          signal: controller.signal
        });
        if (!response.ok) throw new Error("Connection failed");
        status.textContent = direction === "stop" ? "Stopped" : direction;
      } catch (error) {
        direction = "stop";
        activePointer = null;
        status.textContent = "Connection lost - press a button to retry";
      } finally {
        clearTimeout(timer);
        busy = false;
      }

      if (direction !== sentDirection) sendCommand();
    }

    function stopCar() {
      direction = "stop";
      activePointer = null;
      sendCommand();
    }

    document.querySelectorAll("[data-dir]").forEach(button => {
      button.addEventListener("pointerdown", event => {
        event.preventDefault();
        if (activePointer !== null) return;
        activePointer = event.pointerId;
        button.setPointerCapture(event.pointerId);
        direction = button.dataset.dir;
        sendCommand();
      });

      ["pointerup", "pointercancel", "lostpointercapture"].forEach(name => {
        button.addEventListener(name, event => {
          if (event.pointerId === activePointer) stopCar();
        });
      });
    });

    document.getElementById("stop").addEventListener("pointerdown", stopCar);
    window.addEventListener("blur", stopCar);
    document.addEventListener("visibilitychange", () => {
      if (document.hidden) stopCar();
    });
    document.addEventListener("contextmenu", event => event.preventDefault());

    // Keep sending commands while connected.
    setInterval(sendCommand, 150);
  </script>
</body>
</html>
)HTML";

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  drive(0, 0);

  Serial.begin(115200);

  WiFi.mode(WIFI_AP);
  WiFi.softAPConfig(
    IPAddress(192, 168, 4, 1),
    IPAddress(192, 168, 4, 1),
    IPAddress(255, 255, 255, 0)
  );

  if (!WiFi.softAP(wifiName, wifiPassword)) {
    Serial.println("Wi-Fi failed. Reset the board.");
    while (true) delay(1000);
  }

  server.on("/", HTTP_GET, []() {
    server.sendHeader("Cache-Control", "no-store");
    server.send_P(200, "text/html", page);
  });

  server.on("/drive", HTTP_POST, []() {
    String direction = server.arg("dir");

    if (direction == "forward") {
      drive(1, 1);
    } else if (direction == "backward") {
      drive(-1, -1);
    } else if (direction == "left") {
      drive(0, 1);
    } else if (direction == "right") {
      drive(1, 0);
    } else {
      drive(0, 0);
    }

    lastCommand = millis();
    server.send(200, "text/plain", "OK");
  });

  server.begin();
  Serial.print("Open http://");
  Serial.println(WiFi.softAPIP());
}

void loop() {
  server.handleClient();

  // Stop if commands stop arriving.
  if (millis() - lastCommand > 600) {
    drive(0, 0);
  }
}
