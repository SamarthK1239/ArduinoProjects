int pirSenseVal = 0;
int relayPin = 10;
int pirPin = 7;
boolean toggle = 0;

void setup() {
  Serial.begin(9600);
  pinMode(relayPin, OUTPUT);
  pinMode(pirPin, INPUT);

}

void loop() {
  pirSenseVal = digitalRead(pirPin);

  if (pirSenseVal, HIGH){
    if (toggle = 1){
     toggle = 0;
    }
   
    else{
     toggle = 1;
    }
  
   if(toggle = 0){
    digitalWrite(relayPin, LOW);
  //turn light bulb off
   }
    
    else if(toggle = 1){
     digitalWrite(relayPin, HIGH);
    //turn light bulb on  
    }
  }
   }
