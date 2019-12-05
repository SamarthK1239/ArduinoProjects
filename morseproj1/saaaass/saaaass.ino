 
String message = "SCHOLARFUN.COM";
char letter;
int pos = 0; 
int stringlen = message.length(); 
int buzzpin = 3;
 
void setup() {
pinMode(buzzpin, OUTPUT);
Serial.begin(9600);
}

void loop() {  

//Go to the next letter
if(pos > stringlen){
return;
}
else { 

letter = message.charAt(pos);
pos = pos + 1;

}

if(letter == 'S'){
    tone(buzzpin, 3000, 1000);
    delay(2000);
    tone(buzzpin, 3000, 500);
    delay(2000);
    tone(buzzpin, 3000, 1000);
    Serial.println("S");
    //break;
}    
if(letter == 'C'){
    tone(buzzpin, 3000, 2000);
    delay(2000);
    tone(buzzpin, 3000, 1000);
    delay(2000);
    tone(buzzpin, 3000, 1000);
    Serial.println("C");
    //break;
}      
}

/////////***********************//////////
/////////***********************//////////
/////////********LOVE YOU*******//////////
/////////***********************//////////
/////////***********************//////////

