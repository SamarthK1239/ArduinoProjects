int redpin = 10; //select the pin for the red LED
int bluepin = 9; // select the pin for the  blue LED
int greenpin = 8;// select the pin for the green LED
int val;
void setup() {
  pinMode(redpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  Serial.begin(9600);
}
void loop() 
{
  for(val = 255; val > 0; val--)
  {
    analogWrite(redpin, constrain(val, -255, 255));  //set PWM value for red
    analogWrite(bluepin, constrain(255 - val, -255, 255)); //set PWM value for blue
    analogWrite(greenpin, constrain(128 - val, -255, 255)); //set PWM value for green
    Serial.println(val); //print current value
    delay(1); 
  }
  for(val = 0; val < 255; val++)
  {
    analogWrite(redpin, val);
    analogWrite(bluepin, 255 - val);
    analogWrite(greenpin, 128 - val);
    Serial.println(val);
    delay(1); 
  }
}