
// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  


void setup() {
  // set up the number of columns and rows on the LCD
  lcd.begin(16, 2);

  // Print a message to the LCD.
  lcd.print("RING IF YOU WANT");  
  lcd.setCursor(0, 1);
  lcd.print("BUGGER");
  }

void loop() {
  // check the status of the switch
  }

  


