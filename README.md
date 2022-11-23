# A1T2 STM32F407VET6 Morse

**Group Name:** Smart Dolphins\
**Owners:** Veknes Benjaman; Saw Jun Chao

**Source Code:** [main.c](/A1T2_STM32F407VET6_Morse/Core/Src/main.c)\
**Video Demonstration:** [https://youtu.be/Id96uEEoQjs](https://youtu.be/Id96uEEoQjs)

## Descriptions on Board and Microcontroller

**STM32 development board model:** STM32F4VE\
**Microcontroller:** STM32F407VET6\
**Core:** ARM Cortex-M4

## Morse Code

<center><img src="/pictures/International_Morse_Code.png"></center>
<center>Picture reference: [3]</center><br />

<center>

| Element  | Time Delay | 
| :-------: | :------: |  
| Dot | 1 unit delay (400ms) |  
| Dash | 3 unit delay (1200ms) |  
| Short Space (between part of same letter) | 1 unit delay (400ms) |  
| Space (between letters) | 3 unit delay (1200ms) |

</center>

## Connection from ST-Link V2 USB and STM32F4VE development board
[1] ST-Link V2 USB

<center><img src="/pictures/ST-LINK_V2_Clone_Header.png"></center>
<center>Picture reference: [3]</center><br />

[2] STM32F4VE Development Board - JTAG Header

<center><img src="/pictures/ARM_JTAG_SWD_HEADER.png"></center>
<center>Picture reference: [3]</center><br />

<center>

| ST-Link V2 USB  | STM32F4VE Development Board | 
| :-------: | :------: |  
| Pin 9 (+3.3V) | Pin 1 (VCC) |  
| Pin 8 (SWCLK) | Pin 9 (SWCLK) |  
| Pin 7 (GND) | Pin 6 (GND) |  
| Pin 6 (SWDIO) | Pin 7 (SWDIO) |  

</center>

## On-board LED Pin Configuration
[1] Sink mode connection (or active low) of on-board LEDs to pin PA6 and PA7

<center><img src="/pictures/Onboard_LED_Schematics.png"></center>
<center>Picture reference: [1]</center><br />

<center>

| PA6 State  | LED D2 | Description |
| :-------: | :------: | :------: |
| 0 | 1 | D2 LED On |
| 1 | 0 | D2 LED Off |

| PA7 State  | LED D3 | Description |
| :-------: | :------: | :------: |
| 0 | 1 | D3 LED On |
| 1 | 0 | D3 LED Off |

</center>

[2] Pinout configuration in STM32CubeIDE

-> PA6 configured as GPIO_Output

[3] Code function

HAL_GPIO_WritePin(GPIOx, GPIO_Pin, PinState) -> Change the state of GPIO_Pin\
HAL_Delay(Delay) -> Creates delay (in ms)

## References

[1] Board Details and Schematics: [https://stm32-base.org/boards/STM32F407VET6-STM32-F4VE-V2.0.html](https://stm32-base.org/boards/STM32F407VET6-STM32-F4VE-V2.0.html)\
[2] STM32CubeIDE Tutorial:\
-> [https://www.st.com/resource/en/user_manual/um2609-stm32cubeide-user-guide-stmicroelectronics.pdf](https://www.st.com/resource/en/user_manual/um2609-stm32cubeide-user-guide-stmicroelectronics.pdf)\
-> [https://www.youtube.com/playlist?list=PLnMKNibPkDnFCosVVv98U5dCulE6T3Iy8](https://www.youtube.com/playlist?list=PLnMKNibPkDnFCosVVv98U5dCulE6T3Iy8)\
[3] Other picture reference\
-> [https://stm32-base.org/assets/img/pinouts/ST-LINK_V2_Clone_Header.png](https://stm32-base.org/assets/img/pinouts/ST-LINK_V2_Clone_Header.png)\
-> [https://stm32-base.org/assets/img/pinouts/ARM_JTAG_SWD_Header.png](https://stm32-base.org/assets/img/pinouts/ARM_JTAG_SWD_Header.png)\
-> [https://upload.wikimedia.org/wikipedia/commons/thumb/b/b5/International_Morse_Code.svg/1200px-International_Morse_Code.svg.png](https://upload.wikimedia.org/wikipedia/commons/thumb/b/b5/International_Morse_Code.svg/1200px-International_Morse_Code.svg.png)