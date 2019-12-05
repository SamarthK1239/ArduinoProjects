int ledpin = 4;
int buzzpin = 3; 
String message = "SCHOOL";
char letter;
int pos = 0; 
int stringlen = message.length(); 
 
void setup() {
pinMode(buzzpin, OUTPUT);
Serial.begin(9600);
pinMode(ledpin, OUTPUT);

}

void loop() {  
Serial.println(pos);
Serial.println(stringlen);
if(pos >= stringlen){
exit(0);
}
else { 
letter = message.charAt(pos);
}

if(letter == 'S'){
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 1500);         
    delay(1500);   
    digitalWrite(ledpin, LOW);
    delay(2000);
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(2000);
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(2000);
    Serial.println("S");

    //break;
}
else if(letter == 'C'){ 
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 1500);
    delay(1500); 
    digitalWrite(ledpin, LOW);
    delay(2000);
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500); 
    digitalWrite(ledpin, LOW);
    delay(2000);
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 1500);
    delay(1500); 
    digitalWrite(ledpin, LOW);
    delay(2000);
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500); 
    digitalWrite(ledpin, LOW);
    delay(2000);
    Serial.println("C");

    //break;
}
else if(letter == 'H'){ 
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500); 
    digitalWrite(ledpin, LOW);
    delay(2000);
      
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500); 
    digitalWrite(ledpin, LOW);
    delay(2000);  
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500); 
    digitalWrite(ledpin, LOW);
    delay(2000);  
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500); 
    digitalWrite(ledpin, LOW);
    delay(2000);
        
    Serial.println("H");
//    break;
}
else if(letter == 'O'){    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 1500);     
    delay(1500); 
    digitalWrite(ledpin, LOW);
    delay(2000);  
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 1500);     
    delay(1500); 
    digitalWrite(ledpin, LOW);
    delay(2000);  
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 1500);     
    delay(1500); 
    digitalWrite(ledpin, LOW);
    delay(2000);
    
    Serial.println("O");
//    break;
}
  else if(letter == 'L'){ 
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(2000);
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 1500);     
    delay(1500); 
    digitalWrite(ledpin, LOW);
    delay(2000);
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500); 
    digitalWrite(ledpin, LOW);
    delay(2000);
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500); 
    digitalWrite(ledpin, LOW);
    delay(2000);
    
    Serial.println("L");
//    break;
  }

//Go to the next letter
pos = pos + 1;

}

