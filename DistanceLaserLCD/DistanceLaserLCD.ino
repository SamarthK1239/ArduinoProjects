#include <LiquidCrystal.h>

const int trigPin = 9;
const int echoPin = 10;
const int redPin = 5;
const int greenPin = 3;
const int bluePin = 4;
const int laserPin = 12;

long duration;
int distance;

const int rs = 46, en = 44, d4 = 36, d5 = 38, d6 = 40, d7 = 42;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // declare the LED pins as outputs
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(laserPin, OUTPUT);

  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600);

  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  Serial.println(distance);

  if (distance >= 15) {
    digitalWrite(greenPin, HIGH); 
    digitalWrite(redPin, LOW);  
    digitalWrite(bluePin, LOW);
    
    lcd.setCursor(0, 0);
    lcd.print("Safe Distance");
  }
  
  else {
    digitalWrite(laserPin, HIGH);
    digitalWrite(greenPin, LOW);  
    digitalWrite(redPin, LOW);  
    digitalWrite(bluePin, HIGH); 
    
    delay(250);
    digitalWrite(redPin, HIGH); 
    digitalWrite(bluePin, LOW);  
    
    delay(250);
    digitalWrite(laserPin, LOW);

    lcd.setCursor(0, 0);
    lcd.print("Laser On");
  }
}