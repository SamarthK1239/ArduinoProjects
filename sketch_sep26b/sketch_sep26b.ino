#include <Servo.h>

 Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
   myservo.attach(9);  
}

void loop() {
   for (pos = 0; pos <= 180; pos += 1) { 
     // in steps of 1 degree
     myservo.write(pos);              
     delay(05);                       
   }
   for (pos = 180; pos >= 0; pos -= 1) { 
     myservo.write(pos);              
     delay(05);                       
   }
}
