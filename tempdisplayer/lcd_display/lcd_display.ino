#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
lcd.begin(16, 2);  
lcd.setCursor(0,0);
lcd.print("works!!");
}

void loop() {
  // put your main code here, to run repeatedly:

}
