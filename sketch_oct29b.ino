#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // Set the LCD address and size
String textToScroll = "Input the text here";
int textLength = textToScroll.length();
int lcdWidth = 16; // LCD width

int scrollPosition = 0; // Initialize the scroll position

void setup() {
  Wire.begin();
  lcd.init();
  lcd.backlight();
  lcd.clear();
  Serial.begin(9600);
}

void loop() {
  lcd.clear();

  String displayText = textToScroll.substring(scrollPosition, scrollPosition + lcdWidth);

  // Print the substring on the LCD
  lcd.setCursor(0, 0);
  lcd.print(displayText);

  // Increase the scroll position
  scrollPosition++;

  // If the entire text has been scrolled, reset the scroll position
  if (scrollPosition >= textLength + lcdWidth) {
    scrollPosition = 0;
  }

  delay(200); // Adjust the delay to control the scrolling speed
}
