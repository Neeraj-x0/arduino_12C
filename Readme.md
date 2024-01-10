## Arduino LCD Scrolling Text

**Description:**
This Arduino sketch demonstrates how to create a scrolling text effect on an LCD using the LiquidCrystal_I2C library. The program scrolls a given text across a 16x2 LCD display connected via I2C communication.

**Connections:**
1. Connect the SDA pin of the LCD (usually labeled A4 on the Arduino board) to the corresponding SDA pin on your Arduino.
2. Connect the SCL pin of the LCD (usually labeled A5 on the Arduino board) to the corresponding SCL pin on your Arduino.
3. Connect the VCC pin of the LCD to the 5V output on the Arduino.
4. Connect the GND pin of the LCD to any ground (GND) pin on the Arduino.

**Dependencies:**
- Wire.h: Included for I2C communication.
- LiquidCrystal_I2C.h: Library for interfacing with I2C-based LCDs.

**Library Installation:**
Ensure that the LiquidCrystal_I2C library is installed in your Arduino IDE. You can install it through the Library Manager by navigating to "Sketch" -> "Include Library" -> "Manage Libraries" and searching for "LiquidCrystal_I2C."

**Initialization:**
- Set the LCD address (0x27), columns (16), and rows (2) in the `LiquidCrystal_I2C` constructor.
- Adjust the `lcdWidth` variable to match the width of your LCD (e.g., 16 columns).

**Variables:**
- `textToScroll`: The text that will be scrolled on the LCD.
- `textLength`: Length of the text to be scrolled.
- `lcdWidth`: Width of the LCD display.
- `scrollPosition`: Current position in the scrolling text.

**Setup:**
- Initialize the Wire library for I2C communication.
- Initialize the LCD using `lcd.init()` and turn on the backlight with `lcd.backlight()`.
- Clear the LCD and start serial communication.

**Loop:**
- Clear the LCD at the beginning of each loop iteration.
- Extract a substring of the scrolling text based on the current scroll position.
- Print the substring on the LCD.
- Increment the scroll position and reset it if the entire text has been scrolled.
- Adjust the delay to control the scrolling speed.

**Usage:**
1. Upload the sketch to your Arduino board.
2. Verify the connections between the Arduino and the LCD.
3. Power up the Arduino, and the scrolling text should appear on the LCD.

**Note:**
- Ensure that the I2C address (0x27) matches the actual address of your LCD. You may need to adjust it based on your specific LCD module.
- Adjust the delay in the loop to control the scrolling speed according to your preference.
