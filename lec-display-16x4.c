/*
    Project name : Arduino Uno LCD 16x4 Display
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-lcd-16x4-display
*/

#include <LiquidCrystal.h>

// Initialize the library by associating any needed LCD interface pin with the Arduino pin number
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // Set up the LCD's number of columns and rows:
  lcd.begin(16, 4);

  // Print "Hello, World!" on the LCD
  lcd.print("Hello, World!");
}

void loop() {
  // No need for code in the loop for this example
}
