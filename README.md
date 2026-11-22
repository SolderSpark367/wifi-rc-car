# wifi-rc-car

- A easy and fun device controlled RC car. This is a Wi-Fi controlled ESP32-WROVER RC Car. It features pretty much what a normal RC car does except this one turns by moving only one back wheel instead of standered RC Car turning. It is pretty simple to make using these directions and you can use this reposition to get all the resources you will need.
- <img width="1920" height="1080" alt="WIN_20261027_23_12_40_Pro" src="https://github.com/user-attachments/assets/972fd408-cc8f-4f9a-945c-0a589fc4c870" />
- Why did I even make this project?? Well I made this project as a way for newly robotics beginners to understand the basics of motors, how they work, and how to operate them using a microcontroller and a motor driver. Not only that but it can be a really easy and educational way to learn how to write basic code for future projects or future reference. 
- RESOURCES
For the chassis file check out the Wi-Fi controlled car chassis.stl file it has the ready to print chassis file (as a reminder you may need to print the file in two different parts since the car has a bottom and top layer and both are pretty big and most probably won't fit in one print cycle on your printer)
- Step by Step instructions. 1: Print the Chasis 2: Mount the parts 3: Wire everything up using the wiring diagram 4: Test the Motors 5: Finalize the code and RC Car itself



  -Some other information-
To upload the code download Arduino IDE for your device (Mac or Windows) then go to the Final-code-for-wifi-rc-car and either copy and paste the code 
into arduino IDE or download the file and upload it in Arduino IDE itself. To connect to the RC Car network look for the network name Kenils-RC-Car and
connect it will ask for a password enter this exactly: kenil1234
then you are all set then connect to the web server which is probably 192.168.4.1 for you and you are all set to drive the RC Car now!
-How to Drive the Car-
To drive the RC Car click a button to make it go either forward, backward, right, or left and release to stop.
How to assemble: first put all the parts on the bottom floor of the car except the ESP32-WROVER or the microcontroller you are using then put the microcontroller on the top and through the holes guide the wires for the wiring through the holes and then screw through the holes on the middle sides to the bottom and top with one giant screw and attach the wheels to the motors that you mounted and then you are done and for the front remember to use the ball caster.


<img width="687" height="482" alt="Screenshot 2026-11-15 111200" src="https://github.com/user-attachments/assets/cbfa9406-eef2-45a0-8891-c283940ee603" />
<img width="1920" height="1080" alt="WIN_20261027_23_12_45_Pro" src="https://github.com/user-attachments/assets/8f0864e8-03bb-4851-9792-60ab099957b8" />
<img width="3024" height="4032" alt="IMG_4606_0ca5bb1c0683ced2" src="https://github.com/user-attachments/assets/a95ab9bf-29cd-4900-97ad-e0cd6934b547" />


- BOM An estimated bill for all the materials are below with each cost of each component and the total Component Quantity Estimated unit cost Total
- ESP32-WROVER-CAM board $17 https://www.amazon.com/Freenove-ESP32-Camera-Development-Board/dp/B0CJJHXD1W/ref=sr_1_2?crid=SC69R8PQTFVT&dib=eyJ2IjoiMSJ9.f0C7SZPbZW-43R2w-6Eeojk5Ee0wgKTjEO-DZ3RvcfOTNi9O7qoUt__BUK82ojL5uG57xEHufDD3tj1wtn6XMbqKAFRXPPqAjZulAlvS7veK8tvEJpeS7PQKRBiKZG3LvyvG9EgRghlbLR1ijAp0E5T88EOAtYxSaSWXuS_BI9fBq4V7ZvHdxiHXl39Vd84Fmu3jWWQnaw2tSdOBQD6FzxfxHWB4T8Hq1kJ7wpUz7Ao.zDOd35LwvUXc2CIrQbUl84LjqvBDP1AuEuvAgiKr2eQ&dib_tag=se&keywords=esp32%2Bwrover%2Bcam%2Bboard&qid=1794760354&sprefix=esp32%2Bwrover%2Bcam%2Bbooar%2Caps%2C97&sr=8-2&th=1
- L298N motor driver $4 https://www.aliexpress.us/item/3256810256485331.html?spm=a2g0o.productlist.main.2.2b3e2817ea15vY&algo_pvid=6631d8c2-82f9-489f-86b4-69487ae4b42f&algo_exp_id=6631d8c2-82f9-489f-86b4-69487ae4b42f-1&pdp_ext_f=%7B%22order%22%3A%2243%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%218.57%214.12%21%21%2156.81%2127.27%21%402101c4b817947604327487446e0d0c%2112000052423134882%21sea%21US%21940486537%21X%211%210%21n_tag%3A-29911%3Bd%3A7c7071ba%3Bm03_new_user%3A-29895&curPageLogUid=e4PNwhmYBH3b&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005010442800083%7C_p_origin_prod%3A&tblci=Girls+figure+skating+training+jacket
- 2 Yellow TT motors that come with wheels $9 https://www.amazon.com/Stemedu-Gearbox-Motor-200RPM-Arduino/dp/B07L881GXZ/ref=sr_1_6?crid=3BPY59OAZG7ZF&dib=eyJ2IjoiMSJ9.HfVy9GxyZ9yQIGDyA40gnItHVOmrX8sOLEYzc64H_ZIlH9AyRW7qu3eIwt724RYLm6lDvmC89SRMF2-cRkv_gTKztOE9Fv7Mu-RPqjHL-TqoWA3X1t4PmD8Qd1iDBzqQTVKniZ8cA91kRxxqhWzQABptLdxBL2Ku0U2UV9Bj5yQZJB5Ie58K1Ft_yyyHQYI8Mmt4IWvNDZCEdTt9eOiosn8cl_ztu87rxdA5nOlHcivQybxoszRwWnlVLt_ruo3ZZ1F9k-RWqzyi8vot0NUggrJnbElQwUyWb_tJBuizeDw.H9CAC_9En7HQ2MVwkXZ8h91q9JgWPMaWs9Emc45mCis&dib_tag=se&keywords=yellow+tt+motors+with+wheels+2+piece&qid=1794760477&sprefix=yellow+tt+motors+with+wheels+2+piec%2Caps%2C107&sr=8-6
- Front ball caster $0.5-10 dollar depending on what material you use to print it or if you buy it directl
- 4×AA battery holder $2 https://www.aliexpress.us/item/3256810255389538.html?spm=a2g0o.productlist.main.7.92b643a15J5CDt&algo_pvid=1a4f2224-509c-4486-8630-b221e7e2377f&algo_exp_id=1a4f2224-509c-4486-8630-b221e7e2377f-6&pdp_ext_f=%7B%22order%22%3A%221307%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%213.18%211.45%21%21%2121.09%219.59%21%402101ef5e17947605323852159e10f7%2112000052419970166%21sea%21US%21940486537%21X%211%210%21n_tag%3A-29911%3Bd%3A7c7071ba%3Bm03_new_user%3A-29895%3BpisId%3A5000000221235491&curPageLogUid=q2wDUiosFB0D&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005010441704290%7C_p_origin_prod%3A&tblci=Girls+figure+skating+training+jacket
- 4 AA batteries $5 https://www.amazon.com/Duracell-Alkaline-Powerboost-Battery-Count/dp/B00000JHQ6/ref=sr_1_5?crid=3N0YCJOWXDJY5&dib=eyJ2IjoiMSJ9.iF-VDq6PgDSgOxmlvHs3LKCPAl5aL0IrvmhbaQ7IND3hz8elQR8RxOc8tsD-Xilo1VWtk2yFLDPUxtO3NicFbsUVbqRxzsXU5OVL1qUmdNyCwYyrqCNAqHmeqOEN1NgtijLLgHVLe7x-Sjcod3cN1SOXmSnDx1qur44S6T5VI_UeyKedJxSos3m6ZvTO1Xero1VsZEM6VsohDiDHAieZXkGg0oIPWTuGS1QFxbzuFb-ujuULTuk8VxETg_czt95ow-O7ZUqPR26zXe3LJeO8nOGTyTa4vBjMLGuWVis5IKQ.mJrAo1sgJBosxQNXxn-RpSVoJodF9dPQRylSDMjiUIg&dib_tag=se&keywords=4%2Baa%2Bbatteries&qid=1794760626&sprefix=4%2Baa%2Bbatteriue%2Caps%2C113&sr=8-5&th=1
- USB power bank $10 https://www.aliexpress.us/item/3256812420546513.html?spm=a2g0o.productlist.main.10.48865fceWzLB73&algo_pvid=93e81337-b6da-4e63-8d12-5c63463c3050&algo_exp_id=93e81337-b6da-4e63-8d12-5c63463c3050-9&pdp_ext_f=%7B%22order%22%3A%2293%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%2132.61%2110.18%21%21%21216.25%2167.51%21%402101de2517947607047835452e0d1d%2112000058853162836%21sea%21US%21940486537%21X%211%210%21n_tag%3A-29911%3Bd%3A7c7071ba%3Bm03_new_user%3A-29895%3BpisId%3A5000000220751393&curPageLogUid=rwXUtDC6Lu8H&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005012606861265%7C_p_origin_prod%3A&tblci=Girls+figure+skating+training+jacket
- USB data/power cable $3 https://www.aliexpress.us/item/3256806096142777.html?spm=a2g0o.productlist.main.1.6a511ef95do43t&algo_pvid=6f6e3208-78d8-43f2-82c6-8e46b4d1f579&algo_exp_id=6f6e3208-78d8-43f2-82c6-8e46b4d1f579-0&pdp_ext_f=%7B%22order%22%3A%223231%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%217.25%212.41%21%21%2148.06%2115.96%21%402101de2517947607529747555e0d1d%2112000036606094159%21sea%21US%21940486537%21X%211%210%21n_tag%3A-29911%3Bd%3A7c7071ba%3Bm03_new_user%3A-29895%3BpisId%3A5000000220751393&curPageLogUid=rW69svALNrgD&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005006282457529%7C_p_origin_prod%3A
- Jumper wires 1 small set $2 https://www.aliexpress.us/item/3256811983393354.html?spm=a2g0o.productlist.main.1.5ad8696edF8Z6F&algo_pvid=df9b25b7-1a72-42f5-b403-1e6131c893e7&algo_exp_id=df9b25b7-1a72-42f5-b403-1e6131c893e7-0&pdp_ext_f=%7B%22order%22%3A%22875%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%212.92%211.92%21%21%2119.39%2112.76%21%4021032e4e17947607820643052e0cc0%2112000057663271541%21sea%21US%21940486537%21X%211%210%21n_tag%3A-29911%3Bd%3A7c7071ba%3Bm03_new_user%3A-29895%3BpisId%3A5000000220751393&curPageLogUid=TwgorZzVqN9q&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005012169708106%7C_p_origin_prod%3A&tblci=Girls+figure+skating+training+jacket
- Filament for chassis 250g $5 https://www.amazon.com/Smoothflux-Filament-decorative-prints-projects/dp/B0H557B2J3/ref=sr_1_1?crid=2HPL6TIK3G6V2&dib=eyJ2IjoiMSJ9.4TZTmVJQONO7UYU7UAikv_FDZ7x8rZCKHuRMJzC_fKobRu6DHgp5t6TNNSbB3O6tHYX8GZ94PTSrAbjm_7nIngpu-R9SgMC9vWhUTINQKQEFFcXd7pudFPPd42E7I9GoZ5jB-5-oC-Q1sUoBH8y9itv0U8b0XfiZ3aeYwGzEY2kIgCvBpbLv-JBicEl0dw9iHTCUl_tPr3H4soNA2UU1t-80DbVnYCsZRpr0TJccbQ4.mBVGCy4laSn61ZyBpaIxsUtxYheeeRULcg0Pt_VuCaY&dib_tag=se&keywords=250g%2Bblack%2Bpla&qid=1794760839&sprefix=250g%2Bblack%2Bpl%2Caps%2C113&sr=8-1&th
- Screws Small amount $2 https://www.aliexpress.us/item/2255799870438450.html?spm=a2g0o.productlist.main.3.36954ac09C0PyB&algo_pvid=e456f97f-c868-416a-ae8b-6e5e748326ba&algo_exp_id=e456f97f-c868-416a-ae8b-6e5e748326ba-2&pdp_ext_f=%7B%22order%22%3A%226781%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%212.40%211.33%21%21%212.40%211.33%21%40210328c017947608991453817e10fc%2110000000227171459%21sea%21US%21940486537%21X%211%210%21n_tag%3A-29911%3Bd%3A7c7071ba%3Bm03_new_user%3A-29895%3BpisId%3A5000000220751393&curPageLogUid=bmdRRiRczqVL&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A4000056753202%7C_p_origin_prod%3A&tblci=Girls+figure+skating+training+jacket

TOTAL: $59.50-$69

- Known issues
the car will not work well on carpet so use it on a hard solid flat surface







