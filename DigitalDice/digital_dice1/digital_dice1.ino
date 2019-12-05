int led1 = 3;
int led2 = 4;
int led3 = 5;
int led4 = 6;
int led5 = 7;
int led6 = 8;
int led7 = 9;
int switchpin = 2;
int switchstate = 0;
int number;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(switchpin, INPUT);
  Serial.begin(9600);
}

void loop() {
switchstate = digitalRead(switchpin);
if (switchstate==HIGH){
  number = random(6);
  switch (number){
 case 1 :
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  Serial.println("1");
  break;
 case 2 :
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  Serial.println("2");
  break;
 case 3 :
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  Serial.println("3");
  break;
 case 4 :
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  Serial.println("4");
  break;
 case 5 :
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, LOW);
  Serial.println("5");
  break;
 case 6 :
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  Serial.println("6");
  break;  
  }
}
else {
  digitalWrite(led7, HIGH);
  Serial.println("wait");
 }

}
