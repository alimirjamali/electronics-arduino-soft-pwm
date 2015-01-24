/******************************************************************************/
/*                                                                            */
/*  Emulating Pulse Width Modulation on Arduino Uno R3 onboard LED on PIN 13  */
/*                                                                            */
/* This program modulates a sine wave with PWM to fade in/out the onboard LED */
/* on Arduino UNO ATmega328P's PB5 PIN which can not be used for hardware PWM */
/*                                                                            */
/******************************************************************************/

#include <math.h>

// 3600 steps per cycle
float myStep=0.1;
// Calculating Pi (3.14159 etc.) the correct way
float Pi=4.0*atan(1.0);

void setup() 
{                
  pinMode(13, OUTPUT);
}

void loop() 
{
  // Going for 3600 steps per cycle
  for (float a=0.0; a<360.0; a+=myStep)
  {
    // Calculatign delay for to emulate a sine wave
    int myDelay=int(abs(sin(a*Pi/180.0)*950.0)+25);
    // Turn the LED on
    digitalWrite(13, HIGH);
    delayMicroseconds(1000-myDelay);
    // set the LED off
    digitalWrite(13, LOW);
    delayMicroseconds(myDelay);
  }
}
