int pinLed1 = 10;
int pinLed2 = 9;
int pinLed3 = 7;
int pinLed4 = 8;
int buttonPin = 6;
int buttonState;
long ran;
int time = 2000;

void setup ()
{
  pinMode (pinLed1, OUTPUT);
  pinMode (pinLed2, OUTPUT);
  pinMode (pinLed3, OUTPUT);
  pinMode (pinLed4, OUTPUT);
  pinMode (buttonPin, INPUT);
  randomSeed(analogRead(0));
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH){
    ran = random(1, 7);
    if (ran == 1){
      digitalWrite (pinLed4, HIGH);
      delay (time);
    }
    elseif (ran == 2){
      digitalWrite (pinLed1, HIGH);
      delay (time);
    }
    if (ran == 3){
      digitalWrite (pinLed3, HIGH);
      digitalWrite (pinLed4, HIGH);
      delay (time);
    }
    elif (ran == 4){
      digitalWrite (pinLed1, HIGH);
      digitalWrite (pinLed3, HIGH);
      delay (time);
    }
    elif (ran == 5){
      digitalWrite (pinLed1, HIGH);
      digitalWrite (pinLed3, HIGH);
      digitalWrite (pinLed4, HIGH);
      delay (time);
   }
   elif (ran == 6){
      digitalWrite (pinLed1, HIGH);
      digitalWrite (pinLed2, HIGH);
      digitalWrite (pinLed3, HIGH);
      delay (time);
   }
  else {
  digitalWrite (pinLed1, LOW);
  digitalWrite (pinLed2, LOW);
  digitalWrite (pinLed3, LOW);
  digitalWrite (pinLed4, LOW);
}
  }
}
