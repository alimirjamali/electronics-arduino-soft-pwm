## Emulating Pulse Width Modulation on Arduino Uno R3 onboard LED on PIN 13

This program modulates a sine wave with PWM to fade in/out the onboard LED on Arduino UNO ATmega328P's PB5 PIN which can not be used with hardware PWM

The program is not efficient as the <math.h> function is used instead of a proper sine array (ATmega328P does not have a floating point arithmetic unit)

This was my first program I tried on Arduino as I was not happy with the diffult [Blink](http://arduino.cc/en/tutorial/blink) sketch flashed on most UNOs.
