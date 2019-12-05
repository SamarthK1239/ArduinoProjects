int buzzpin = 10;
 
 
 String message = "SCHOLARFUN.COM";
 char letter;
 int pos = 0; 
 int stringlen = message.length(); 
 
void setup() {
pinMode(buzzpin, OUTPUT);


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
    tone(buzzpin, 3000, 1000);
    delay(2000);
    tone(buzzpin, 3000, 1000);
    //break;
}
else if(letter == 'C'){ 
    tone(buzzpin, 3000, 6000);
    delay(2000);
    tone(buzzpin, 3000, 1000);
    delay(2000);
    tone(buzzpin, 3000, 6000);
    delay(2000);
    tone(buzzpin, 3000, 1000);
    //break;
}
else if(letter == 'H'){ 
    tone(buzzpin, 3000, 1000);
    delay(2000);  
    tone(buzzpin, 3000, 1000);
    delay(2000);  
    tone(buzzpin, 3000, 1000);
    delay(2000);  
    tone(buzzpin, 3000, 1000);
//    break;
}
else if(letter == 'O'){    
    tone(buzzpin, 3000, 3000);
    delay(2000);  
    tone(buzzpin, 3000, 3000);
    delay(2000);  
    tone(buzzpin, 3000, 3000);
//    break;
}
  else if(letter == 'L'){ 
    tone(buzzpin, 3000, 1000);
    delay(2000);
    tone(buzzpin, 3000, 3000);
    delay(2000);
    tone(buzzpin, 3000, 1000);
    delay(2000);
    tone(buzzpin, 3000, 1000);
//    break;
  }
  else if(letter == 'A'){ 
    tone(buzzpin, 3000, 1000);
    delay(2000);
    tone(buzzpin, 3000, 3000);
//    break;
  }
  else if(letter == 'R'){ 
    tone(buzzpin, 3000, 1000);
    delay(2000);
    tone(buzzpin, 3000, 3000);
    delay(2000);
    tone(buzzpin, 3000, 1000);
//    break;
  }
  else if(letter == 'F'){ 
    tone(buzzpin, 3000, 1000);
    delay(2000);
    tone(buzzpin, 3000, 1000);
    delay(2000);
    tone(buzzpin, 3000, 3000);
    delay(2000);
    tone(buzzpin, 3000, 1000);
//    break;
  }
  else if(letter == 'U'){ 
    tone(buzzpin, 3000, 1000);
    delay(2000);
    tone(buzzpin, 3000, 1000);
    delay(2000);
    tone(buzzpin, 3000, 3000);
//    break;
  }
  else if(letter == 'N'){ 
    tone(buzzpin, 3000, 3000);
    delay(2000);
    tone(buzzpin, 3000, 1000);
//    break;
  }
  else if(letter == 'M'){ 
    tone(buzzpin, 3000, 3000);
    delay(2000);
    tone(buzzpin, 3000, 3000);
    //break;
  }  
 else if(letter = '.'){
    tone(buzzpin, 3000, 1000);
    delay(2000);
    tone(buzzpin, 3000, 3000);
    delay(2000);
     tone(buzzpin, 3000, 1000);
    delay(2000);
    tone(buzzpin, 3000, 3000);
    delay(2000);
     tone(buzzpin, 3000, 1000);
    delay(2000);
    tone(buzzpin, 3000, 3000);
  }                   
}

/////////***********************//////////
/////////***********************//////////
/////////********LOVE YOU*******//////////
/////////***********************//////////
/////////***********************//////////

