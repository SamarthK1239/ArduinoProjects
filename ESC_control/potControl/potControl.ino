int potPin = A2;
int led1 = 13;

void setup() {
Serial.begin(9600);
}

void loop() {
  int potValue = potentiometerValue();
  int fadeValue = map(potValue, 0, 1023, 0, 255);

  analogWrite(led1, fadeValue);
  delay(30);

  Serial.println(potValue);
}

int potentiometerValue(){
  int potVal = analogRead(potPin);
  return potVal;
}
