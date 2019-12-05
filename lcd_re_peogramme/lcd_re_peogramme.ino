#include <LiqidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2)


void setup() {
 lcd.begin(16, 2) 
//print a messageto the LCD
  lcd.print("")
  lcd.setCursor(0, 1)
  lcd.print("")
void loop() {
}
