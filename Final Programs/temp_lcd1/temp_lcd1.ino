#include <LiquidCrystal.h>
#include <LM35.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int led1 = 6;
int led2 = 7;
int led3 = 8;
int led4 = 9;
float temp; //Define the temp float variable
float tempf;
float tem1;
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
tem1 = analogRead(sensorpin); 
tempf = tem1+10;
temp = (tempf - 32) * 0.5556 ;  
lcd.setCursor(8,0); 
lcd.print(temp); 
lcd.setCursor(8,1);
lcd.print(tempf); 
Serial.println(tempf);

if(tempf >= 50 and tempf <= 75){
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  Serial.println("c");
 // tempf == 70;
}

else if(tempf >= 76 and tempf <= 86){
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  Serial.println("mc");
}

else if(tempf >= 87 and tempf <= 93 ){
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  Serial.println("m");
}

else {
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  Serial.println("h");
}
delay(2000); 

}
