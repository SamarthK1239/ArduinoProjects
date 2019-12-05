#include <LiquidCrystal.h>
#include <LM35.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

float temp; //Define the temp float variable
float tempf;
float tem1;
int sensorpin = 0;

void setup() {
lcd.begin(16, 2);
}

void loop() {
  // put your main code here, to run repeatedly:
tempf = analogRead(sensorpin);
lcd.setCursor(0,0);
 lcd.print(tempf);
 delay(1000);
}
