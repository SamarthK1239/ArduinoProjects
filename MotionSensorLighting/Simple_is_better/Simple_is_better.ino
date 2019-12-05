int relayPin = 10;
int pirPin = 7;
int Pirval = 0;


void setup() {
  Serial.begin(9600);
  pinMode(relayPin, OUTPUT);
  pinMode(pirPin, INPUT);

}

void loop() {
Pirval = digitalRead(pirPin);
   
   if (digitalRead(pirPin = 0)){
  Serial.println("System Activated");
  
  digitalWrite(relayPin, HIGH);
  
  delay(60);
  Serial.println(60);
  Serial.println(Pirval);

  }
  else{
    digitalWrite(relayPin, LOW);
    Serial.println("System Ready");
  }
   }
   
