#include <LiquidCrystal.h>
#include <LM35.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int led1 = 6;
int led2 = 7;
int led3 = 8;
int led4 = 9;
float temp; //Define the temp float variable
float tempf;
int sensorpin = 0;

void setup() {
lcd.begin(16, 2);
lcd.setCursor(0,0);
lcd.print("Temp C = "); 
lcd.setCursor(0,1); 
lcd.print("Temp F = ");
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
Serial.begin(9600);
}

void loop() {
tempf = analogRead(sensorpin); 
temp = tempf * 0.48828125; 
lcd.setCursor(8,0); 
lcd.print(temp); 
lcd.setCursor(8,1);
lcd.print(tempf); 

if(tempf >= 50 or tempf <= 60){
  digitalWrite(led1, HIGH);
  Serial.println("c");
  tempf == 70;
}

else if(tempf >= 61 or tempf <= 65){
  digitalWrite(led2,HIGH);
  Serial.println("mc");
}

else if(tempf >= 66 or tempf <= 70){
  digitalWrite(led3, HIGH);
  Serial.println("m");
}

else {
  digitalWrite(led4, HIGH);
  Serial.println("h");
}
delay(1000); 

}
