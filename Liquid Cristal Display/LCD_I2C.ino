/* 
 *  --------------------------------------------------------
 *  Project: Liquid Crystal Display I2C
 *  Date: 30/06/2022
 *  Version: 1.0
 *  
 *  NOTE: This program is a contribution for the development 
 *  of projects with the Raspberry pi pico development board 
 *  in the Arduino programming environment.
 *  
 *  Board: Raspberry Pi Pico
 *  IDE: Arduino IDE
 *  Library: https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library
 *  SDK Raspberry Pi Pico: https://github.com/earlephilhower/arduino-pico
 *  
 *  Author: Andres Elias Valdez
 --------------------------------------------------------
*/
#include "LiquidCrystal_I2C.h" //Liquid Crystal Display library
#include <Wire.h>  //Library for I2C/TWI communication
#define PCF8574  0x27 //Set I2C module hexadecimal address, NOTE: You need to scan the module address
#define PCF8574A 0x3F

TwoWire Wire_00(i2c0, 8,9); // Set I2C port and pins SDA and SCL
LiquidCrystal_I2C lcd(&Wire_00, PCF8574, 16, 2); //Declare object for set data comunication I2C and screen size 
void setup() {
  
  lcd.begin(); //Init display
  lcd.backlight(); //Turn on of the backlight 

  lcd.setCursor(4,0); //Set cursor in column 4 and row 0
  lcd.print("Welcome"); //Print the string in the display
  delay(2000); //Wait for 2000 ms

  lcd.clear(); //Clear display
  lcd.setCursor(4,1); //Set cursor in column 4 and row 1
  lcd.print("Loading..."); //Print the string in the display
  delay(2000); //Wait for 2000 ms
  lcd.clear(); //Clear display
  
}

void loop() {
  
  lcd.setCursor(4,0); //Set cursor in column 4 and row 0
  lcd.print("Arduino"); //Print the string in the display

  String text = "Raspberry Pi Pico     " ; //String variable declaration
  for(int i = 0; i < text.length(); i++){ //for loop to increment the position of the text variable
    String SetCursor = text.substring(i,0); //String variable for set cursor in position i
    lcd.setCursor(0,1); //Set cursor
    lcd.print(text.substring(i) + SetCursor); //Print scrolling text in the display
    delay(400); //Wait for 400 ms
  }
}
