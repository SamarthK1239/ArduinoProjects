#define in2  9
#define out  8
void setup() {
pinMode(in2, OUTPUT);
pinMode(out, INPUT);
Serial.begin(9600);
}
void loop() {
  
  switch(digitalRead(out)){
    case HIGH:
      digitalWrite(in2, LOW);
      Serial.println("SYSTEM RUNNING");
      break;
    case LOW:
      digitalWrite(in2, HIGH);
      Serial.println("SYSTEM ON STANDBY");
      break;
  }
}
