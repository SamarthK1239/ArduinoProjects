int led1 = 13;
void setup() {
  pinMode(led1, OUTPUT);
  
  }

void loop() {
  digitalWrite(led1, HIGH);
  delay(2000);
  digitalWrite(led1, LOW);
  delay(50);

}
