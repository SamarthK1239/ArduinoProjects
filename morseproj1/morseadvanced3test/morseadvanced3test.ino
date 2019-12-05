int buzzpin = 3; 
 
 String message = "SCHOLARFUN.COM";
 char letter;
 int pos = 0; 
 int stringlen = message.length(); 
 
void setup() {
pinMode(buzzpin, OUTPUT);


}

void loop() {  

//Go to the next letter
pos = pos + 1;
if(pos > stringlen){
return;
}
else { 
letter = message.charAt(pos);
}

if(letter == 'S'){
    tone(buzzpin, 3000, 1000);
    delay(2000);
    tone(buzzpin, 3000, 1000);
    delay(2000);
    tone(buzzpin, 3000, 1000);
    //break;
}
                   
}

/////////***********************//////////
/////////***********************//////////
/////////********LOVE YOU*******//////////
/////////***********************//////////
/////////***********************//////////

