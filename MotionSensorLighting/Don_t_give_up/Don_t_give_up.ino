int in2 = 9;
int out = 8;
void setup() {
pinMode(in2, OUTPUT);
pinMode(out, INPUT);
Serial.begin(9600);
}
void loop() {
  
if(digitalRead(out) == HIGH){
  digitalWrite(in2, LOW);

  Serial.println("SYSTEM RUNNING");
  delay(20000);
  
    }
else{
  digitalWrite(in2, HIGH);

    Serial.println("SYSTEM ON STANDBY");
}
}
