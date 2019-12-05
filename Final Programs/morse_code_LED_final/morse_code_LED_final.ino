int ledpin = 13;
int buzzpin = 10; 
String message = "lOVESAMARTH";
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

if(letter == 'A'or'a'){
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);         
    delay(500);   
    digitalWrite(ledpin, LOW);
    delay(2000);
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 1500);     
    delay(1500);
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("A");
    
   //break;
}
 else if (letter == 'B'or'b'){
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

    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("B");
    

  }

else if (letter == 'C'or'c'){
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
    delay(3000);
    Serial.println("C");
    

  }

else if (letter == 'D'or'd'){
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
    delay(3000);
    Serial.println("D");
    

  }

else if (letter == 'E'or'e'){
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);         
    delay(500);   
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("E");
    
  }

else if (letter == 'F'or'f'){
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
    tone(buzzpin, 3000, 1500);     
    delay(1500);
    digitalWrite(ledpin, LOW);
    delay(2000);

        digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("F");
    

  }

else if (letter == 'G'or'g'){
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
    tone(buzzpin, 3000, 500);     
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("G");
    

  }

else if (letter == 'H'or'h'){
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
    delay(3000); 
    Serial.println("H");
    

  }

else if (letter == 'I'or'i'){
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(2000);
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("I");
    

  }

else if (letter == 'J'or'j'){
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
    tone(buzzpin, 3000, 1500);     
    delay(1500);
    digitalWrite(ledpin, LOW);
    delay(2000);

    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 1500);     
    delay(1500);
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("J");
    

  }

else if (letter == 'K'or'k'){
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
    delay(3000);
    Serial.println("K");
    

  }

else if (letter == 'L'or'l'){
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

    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("L");
    

  }

else if (letter == 'M'or'm'){
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 1500);         
    delay(1500);   
    digitalWrite(ledpin, LOW);
    delay(2000);
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 1500);     
    delay(1500);
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("M");
   }

else if (letter == 'N'or'n'){
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 1500);         
    delay(1500);   
    digitalWrite(ledpin, LOW);
    delay(2000);
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("N");
   }

else if (letter == 'O'or'o'){
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
    delay(3000);
    Serial.println("O");
    

  }

else if (letter == 'P'or'p'){
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
    tone(buzzpin, 3000, 1500);         
    delay(1500);   
    digitalWrite(ledpin, LOW);
    delay(2000);
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("P");
    

  }

else if (letter == 'Q'or'q'){
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
    tone(buzzpin, 3000, 500);     
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(2000);
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 1500);         
    delay(1500);   
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("Q");
    

  }

else if (letter == 'R'or'r'){
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
    delay(3000);
    Serial.println("R");
    

  }

else if (letter == 'S'or's'){
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
    Serial.println("S");
    

  }

else if (letter == 'T'or't'){
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 1500);         
    delay(1500);   
    digitalWrite(ledpin, LOW);
    delay(2000);
    Serial.println("T");
   }

else if (letter == 'U'or'u'){
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
    tone(buzzpin, 3000, 1500);         
    delay(1500);   
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("U");
    

  }

else if (letter == 'V'or'v'){
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
    tone(buzzpin, 3000, 1500);         
    delay(1500);   
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("V");
    

  }

else if (letter == 'W'or'w'){
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
    tone(buzzpin, 3000, 1500);     
    delay(1500);
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("W");
    

  }

else if (letter == 'X'or'x'){
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
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 1500);         
    delay(1500);   
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("X");
    

  }

else if (letter == 'Y'or'y'){
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
    tone(buzzpin, 3000, 1500);         
    delay(1500);   
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("Y");
    

  }

else if (letter == 'Z'or'z'){
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
    tone(buzzpin, 3000, 500);     
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(2000);
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("Z");
   }

else if (letter == '1'){
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
    tone(buzzpin, 3000, 1500);     
    delay(1500);
    digitalWrite(ledpin, LOW);
    delay(2000);
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 1500);     
    delay(1500);
    digitalWrite(ledpin, LOW);
    delay(3000);

    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 1500);     
    delay(1500);
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("1");
   }

else if (letter == '2'){
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
    tone(buzzpin, 3000, 1500);     
    delay(1500);
    digitalWrite(ledpin, LOW);
    delay(2000);
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 1500);     
    delay(1500);
    digitalWrite(ledpin, LOW);
    delay(3000);

    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 1500);     
    delay(1500);
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("2");
   }   

   else if (letter == '3'){
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
    tone(buzzpin, 3000, 1500);     
    delay(1500);
    digitalWrite(ledpin, LOW);
    delay(3000);

    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 1500);     
    delay(1500);
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("3");
   }

   else if (letter == '4'){
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
    delay(3000);

    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 1500);     
    delay(1500);
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("4");
   }

   else if (letter == '5'){
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
    delay(3000);

    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("5");
   }

   else if (letter == '6'){
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
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(3000);

    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("6");
   }

    else if (letter == '7'){
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
    tone(buzzpin, 3000, 500);     
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(2000);
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(3000);

    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("7");
   }

    else if (letter == '8'){
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
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(3000);

    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("8");
   }

    else if (letter == '9'){
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
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 1500);     
    delay(1500);
    digitalWrite(ledpin, LOW);
    delay(3000);

    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 500);     
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("9");
   }

   else if (letter == '0'){
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
    
    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 1500);     
    delay(1500);
    digitalWrite(ledpin, LOW);
    delay(3000);

    digitalWrite(ledpin, HIGH);
    tone(buzzpin, 3000, 1500);     
    delay(1500);
    digitalWrite(ledpin, LOW);
    delay(3000);
    Serial.println("0");

   }
//Go to the next letter
pos = pos + 1;


}

