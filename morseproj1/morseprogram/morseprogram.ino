int buzzpin=2;
int switchpin=3;
int led=4;
int switchstate=0;

void setup() {
pinMode(buzzpin, OUTPUT);
pinMode(switchpin, INPUT);
pinMode(led, OUTPUT);
}

void loop() {
switchstate = digitalRead(2);

 if (switchstate == LOW){
   (buzzpin, HIGH);
   (led, HIGH);
}
 else {
   (buzzpin,LOW);
   (led, LOW); 
}
}
