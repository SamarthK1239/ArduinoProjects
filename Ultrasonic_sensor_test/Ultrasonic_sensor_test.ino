const int trigPin = 10;
const int echoPin = 11;
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); 
}
void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(20);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(100);
  
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance= duration*0.034/2;

  Serial.print("Distance: ");
  Serial.println(distance);
}
