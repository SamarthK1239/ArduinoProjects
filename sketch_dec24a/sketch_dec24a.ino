 #include <LiquidCrystal.h>
 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 const int motorPin = 7;
 const int switchPin = 6;
 int switchState = 0;
void setup() {
 lcd.begin(16, 2);
 pinMode(motorPin, OUTPUT);
 pinMode(switchPin, INPUT);
 lcd.print("");
  switchState = digitalRead(switchPin);
  lcd.print(switchState);
  if (switchState == HIGH) {
    digitalWrite(motorPin, LOW);
    lcd.print("");
  }   else {
    // turn motor off:
    digitalWrite(motorPin, LOW);
    lcd.print("samarth");
  }
  
 }
 void loop (){

  
 }

