/*
    Code by : Projects_learner
    Project name : LCD Display 16x4 using Ardino UNO
    Modified Date : 02-06-2024
    Website : https://projectslearner.com/learn/arduino-uno-lcd-16x4-display
*/

#include <LiquidCrystal.h>

// Initialize the library with the numbers of the interface pins
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // Set up the LCD's number of columns and rows:
  lcd.begin(16, 4);

  // Print initial messages to the LCD.
  lcd.setCursor(0, 0);
  lcd.print("Circuit Digest!");

  lcd.setCursor(0, 1);
  lcd.print("Row 1");

  lcd.setCursor(0, 2);
  lcd.print("Row 2");

  lcd.setCursor(0, 3);
  lcd.print("Row 3");
  
  delay(2000);
  
  // Scroll message on first row
  scrollMessageRight("Circuit Digest!", 150, 0);
  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Count:");

  // Print count header on second row
  lcd.setCursor(0, 1);
  lcd.print("Counting:");
}

void loop() {
  // Count from 0 to 9 and display on the second row of the LCD
  for (int i = 0; i < 10; i++) {
    lcd.setCursor(10, 1);
    lcd.print(i);
    delay(1000);
  }

  // After counting, clear the count and start over
  lcd.setCursor(10, 1);
  lcd.print(" ");
}

void scrollMessageRight(const String &message, int delayTime, int row) {
  lcd.setCursor(0, row);
  lcd.print(message);

  for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
    lcd.scrollDisplayRight();
    delay(delayTime);
  }
}
