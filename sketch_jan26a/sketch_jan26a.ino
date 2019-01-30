  #include <LiquidCrystal.h>
  const int rs = 7, en = 6, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
  LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
  int i = 0;
  int pina = 13;
  int pinb = 12;
  int pinc = 11;
  int pind = 10;
  int pine = 9;
  int pinf = 8;
  char b = "";
  int z = 0;
  void setup() {
    // put your setup code here, to run once:
    pinMode (pina,OUTPUT);
    pinMode (pinb,OUTPUT);
    pinMode (pinc,OUTPUT);
    pinMode (pind,OUTPUT);
    pinMode (pine,OUTPUT);
    pinMode (pinf,OUTPUT);
    Serial.begin(9600);
  }
  
  void loop() {
    if(Serial.available()>0){
    b = Serial.read();
    /*if(z=='a'){
    for(int i = 0 ; i < a.length() ; i++){
        b = a.charAt(i);*/
        switch(b){
            case 'a' :
            case 'A' : 
                      digitalWrite(pina,HIGH);
                      digitalWrite(pinb,LOW);
                      digitalWrite(pinc,LOW);
                      digitalWrite(pind,LOW);
                      digitalWrite(pine,LOW);
                      digitalWrite(pinf,LOW);
                      break;
            case 'b' :
            case 'B' : 
                      digitalWrite(pina,HIGH);
                      digitalWrite(pinb,LOW);
                      digitalWrite(pinc,HIGH);
                      digitalWrite(pind,LOW);
                      digitalWrite(pine,LOW);
                      digitalWrite(pinf,LOW);
                      break;
            case 'c' :
            case 'C' :  
                      digitalWrite(pina,HIGH);
                      digitalWrite(pinb,HIGH);
                      digitalWrite(pinc,LOW);
                      digitalWrite(pind,LOW);
                      digitalWrite(pine,LOW);
                      digitalWrite(pinf,LOW);
                      break;
            case 'd' :
            case 'D' : 
                      digitalWrite(pina,HIGH);
                      digitalWrite(pinb,HIGH);
                      digitalWrite(pinc,LOW);
                      digitalWrite(pind,HIGH);
                      digitalWrite(pine,LOW);
                      digitalWrite(pinf,LOW);
                      break;
            case 'e' :
            case 'E' : 
                      digitalWrite(pina,HIGH);
                      digitalWrite(pinb,LOW);
                      digitalWrite(pinc,LOW);
                      digitalWrite(pind,HIGH);
                      digitalWrite(pine,LOW);
                      digitalWrite(pinf,LOW);
                      break;
            case 'f' :
            case 'F' : 
                      digitalWrite(pina,HIGH);
                      digitalWrite(pinb,HIGH);
                      digitalWrite(pinc,HIGH);
                      digitalWrite(pind,LOW);
                      digitalWrite(pine,LOW);
                      digitalWrite(pinf,LOW);
                      break;
            case 'g' :
            case 'G' : 
                      digitalWrite(pina,HIGH);
                      digitalWrite(pinb,HIGH);
                      digitalWrite(pinc,HIGH);
                      digitalWrite(pind,HIGH);
                      digitalWrite(pine,LOW);
                      digitalWrite(pinf,LOW);
                      break;
            case 'h' :
            case 'H' :  
                      digitalWrite(pina,HIGH);
                      digitalWrite(pinb,LOW);
                      digitalWrite(pinc,HIGH);
                      digitalWrite(pind,HIGH);
                      digitalWrite(pine,LOW);
                      digitalWrite(pinf,LOW);
                      break;
            case 'i' :
            case 'I' :  
                      digitalWrite(pina,LOW);
                      digitalWrite(pinb,HIGH);
                      digitalWrite(pinc,HIGH);
                      digitalWrite(pind,LOW);
                      digitalWrite(pine,LOW);
                      digitalWrite(pinf,LOW);
                      break;
            case 'j' :
            case 'J' : 
                      digitalWrite(pina,LOW);
                      digitalWrite(pinb,HIGH);
                      digitalWrite(pinc,HIGH);
                      digitalWrite(pind,HIGH);
                      digitalWrite(pine,LOW);
                      digitalWrite(pinf,LOW);
                      break;
            case 'k' :
            case 'K' : 
                      digitalWrite(pina,HIGH);
                      digitalWrite(pinb,LOW);
                      digitalWrite(pinc,LOW);
                      digitalWrite(pind,LOW);
                      digitalWrite(pine,HIGH);
                      digitalWrite(pinf,LOW);
                      break;
            case 'l' :
            case 'L' : 
                      digitalWrite(pina,HIGH);
                      digitalWrite(pinb,LOW);
                      digitalWrite(pinc,HIGH);
                      digitalWrite(pind,LOW);
                      digitalWrite(pine,HIGH);
                      digitalWrite(pinf,LOW);
                      break;
            case 'm' :
            case 'M' : 
                      digitalWrite(pina,HIGH);
                      digitalWrite(pinb,HIGH);
                      digitalWrite(pinc,LOW);
                      digitalWrite(pind,LOW);
                      digitalWrite(pine,HIGH);
                      digitalWrite(pinf,LOW);
                      break;
            case 'n' :
            case 'N' :  
                      digitalWrite(pina,HIGH);
                      digitalWrite(pinb,HIGH);
                      digitalWrite(pinc,LOW);
                      digitalWrite(pind,HIGH);
                      digitalWrite(pine,HIGH);
                      digitalWrite(pinf,LOW);
                      break;
            case 'o' :
            case 'O' : 
                      digitalWrite(pina,HIGH);
                      digitalWrite(pinb,LOW);
                      digitalWrite(pinc,LOW);
                      digitalWrite(pind,HIGH);
                      digitalWrite(pine,HIGH);
                      digitalWrite(pinf,LOW);
                      break;
            case 'p' :
            case 'P' : 
                      digitalWrite(pina,HIGH);
                      digitalWrite(pinb,HIGH);
                      digitalWrite(pinc,HIGH);
                      digitalWrite(pind,LOW);
                      digitalWrite(pine,HIGH);
                      digitalWrite(pinf,LOW);
                      break;
            case 'q' :
            case 'Q' : 
                      digitalWrite(pina,HIGH);
                      digitalWrite(pinb,HIGH);
                      digitalWrite(pinc,HIGH);
                      digitalWrite(pind,HIGH);
                      digitalWrite(pine,HIGH);
                      digitalWrite(pinf,LOW);
                      break;
            case 'r' :
            case 'R' : 
                      digitalWrite(pina,HIGH);
                      digitalWrite(pinb,LOW);
                      digitalWrite(pinc,HIGH);
                      digitalWrite(pind,HIGH);
                      digitalWrite(pine,HIGH);
                      digitalWrite(pinf,LOW);
                      break;
            case 's' :
            case 'S' : 
                      digitalWrite(pina,LOW);
                      digitalWrite(pinb,HIGH);
                      digitalWrite(pinc,HIGH);
                      digitalWrite(pind,LOW);
                      digitalWrite(pine,HIGH);
                      digitalWrite(pinf,LOW);
                      break;
            case 't' :
            case 'T' : 
                      digitalWrite(pina,LOW);
                      digitalWrite(pinb,HIGH);
                      digitalWrite(pinc,HIGH);
                      digitalWrite(pind,HIGH);
                      digitalWrite(pine,HIGH);
                      digitalWrite(pinf,LOW);
                      break;
            case 'u' :
            case 'U' : 
                      digitalWrite(pina,HIGH);
                      digitalWrite(pinb,LOW);
                      digitalWrite(pinc,LOW);
                      digitalWrite(pind,LOW);
                      digitalWrite(pine,HIGH);
                      digitalWrite(pinf,HIGH);
                      break;
            case 'v' :
            case 'V' : 
                      digitalWrite(pina,HIGH);
                      digitalWrite(pinb,LOW);
                      digitalWrite(pinc,HIGH);
                      digitalWrite(pind,LOW);
                      digitalWrite(pine,HIGH);
                      digitalWrite(pinf,HIGH);
                      break;
            case 'w' :
            case 'W' : 
                      digitalWrite(pina,LOW);
                      digitalWrite(pinb,HIGH);
                      digitalWrite(pinc,HIGH);
                      digitalWrite(pind,HIGH);
                      digitalWrite(pine,LOW);
                      digitalWrite(pinf,HIGH);
                      break;
            case 'x' :
            case 'X' : 
                      digitalWrite(pina,HIGH);
                      digitalWrite(pinb,HIGH);
                      digitalWrite(pinc,LOW);
                      digitalWrite(pind,LOW);
                      digitalWrite(pine,HIGH);
                      digitalWrite(pinf,HIGH);
                      break;
            case 'y' :
            case 'Y' : 
                      digitalWrite(pina,HIGH);
                      digitalWrite(pinb,HIGH);
                      digitalWrite(pinc,LOW);
                      digitalWrite(pind,HIGH);
                      digitalWrite(pine,HIGH);
                      digitalWrite(pinf,HIGH);
                      break;
            case 'z' :
            case 'Z' : 
                      digitalWrite(pina,HIGH);
                      digitalWrite(pinb,LOW);
                      digitalWrite(pinc,LOW);
                      digitalWrite(pind,HIGH);
                      digitalWrite(pine,HIGH);
                      digitalWrite(pinf,HIGH);
                      break;
            case ' ' : 
                      digitalWrite(pina,LOW);
                      digitalWrite(pinb,LOW);
                      digitalWrite(pinc,LOW);
                      digitalWrite(pind,LOW);
                      digitalWrite(pine,LOW);
                      digitalWrite(pinf,LOW);
                      lcd.setCursor(0, 1);
                      lcd.print("                     ");
                      lcd.setCursor(0, 1);
                      break;
        }
        delay(250);
        lcd.print(b);
            digitalWrite(pina,LOW);
            digitalWrite(pinb,LOW);
            digitalWrite(pinc,LOW);
            digitalWrite(pind,LOW);
            digitalWrite(pine,LOW);
            digitalWrite(pinf,LOW);
        delay(250);         
  }
 }
