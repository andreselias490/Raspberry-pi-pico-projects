/* 
 *  --------------------------------------------------------
 *  Project: BLINK LED
 *  Date: 30/06/2022
 *  Version: 1.0
 *  
 *  NOTE: This program is a contribution for the development 
 *  of projects with the Raspberry pi pico development board 
 *  in the Arduino programming environment.
 *  
 *  Board: Raspberry Pi Pico
 *  IDE: Arduino IDE
 *  Author: Andres Elias Valdez
 *  SDK Raspberry Pi Pico: https://github.com/earlephilhower/arduino-pico
 --------------------------------------------------------
*/

#define BUILTIN_LED 25 //Define LED builtin on board

void setup() {

  pinMode(BUILTIN_LED, OUTPUT); //Set the LED as output

}

void loop() {

  digitalWrite(BUILTIN_LED, HIGH); //Set the LED in High state
  delay(1000); //Wait for a 1000 ms
  digitalWrite(BUILTIN_LED, LOW); //Set the LED in low state
  delay(1000); //Wait for a 1000 ms

}
