int buzzpin = 3; 
 
String message = "SCHOLARFUN.COM";
String letter;
int pos = 0; 
int stringlen = message.length(); 
 
void setup() {
pinMode(buzzpin, OUTPUT);

pos = pos + 1;
letter = message.charAt(pos);

if(message[3] == 'L') {
    tone(buzzpin, 3000, 1000);
    delay(2000);
    tone(buzzpin, 3000, 1000);
    delay(2000);
    tone(buzzpin, 3000, 1000); 
}
}

void loop(){
  
}

