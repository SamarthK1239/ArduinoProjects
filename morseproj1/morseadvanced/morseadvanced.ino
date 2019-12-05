 String message = "SCHOLARFUN.COM";
 String letter;
 int pos = 1; 
 int stringlen = message.length(); 
 
void setup() {

}

void loop() {
letter = message.charAt(pos);
  
switch(letter){
  case S: 
    buzz(1000);
    delay(1000);
    buzz(1000);
    delay(1000);
    buzz(1000);
    break;
  case C: 
    buzz(3000);
    delay(1000);
    buzz(1000);
    delay(1000);
    buzz(3000);
    delay(1000);
    buzz(1000);
    break;
  case H:
    buzz(1000);
    delay(1000);  
    buzz(1000);
    delay(1000);  
    buzz(1000);
    delay(1000);  
    buzz(1000);
    break;
  case O:
    buzz(3000);
    delay(1000);  
    buzz(3000);
    delay(1000);  
    buzz(3000);
    break;
  case L:
    buzz(1000);
    delay(1000);
    buzz(3000);
    delay(1000);
    buzz(1000);
    delay(1000);
    buzz(1000);
    break;
  case A:
    buzz(1000);
    delay(1000);
    buzz(3000);
    break;
  case R:
    buzz(1000);
    delay(1000);
    buzz(3000);
    delay(1000);
    buzz(1000);
    break;
  case F:
    buzz(1000);
    delay(1000);
    buzz(1000);
    delay(1000);
    buzz(3000);
    delay(1000);
    buzz(1000);
    break;
  case U:
    buzz(1000);
    delay(1000);
    buzz(1000);
    delay(1000);
    buzz(3000);
    break;
  case N:
    buzz(3000);
    delay(1000);
    buzz(1000);
    break;
  case M:
    buzz(3000);
    delay(1000);
    buzz(3000);
    break;                   
}

pos = pos + 1;
if(pos > stringlen){
  break;
}

}
