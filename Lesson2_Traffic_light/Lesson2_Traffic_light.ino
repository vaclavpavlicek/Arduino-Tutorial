int redLed = 7;
int yellowLed = 8;
int greenLed = 9;

  void setup(){
  
      pinMode(redLed,OUTPUT);
      pinMode(yellowLed,OUTPUT);
      pinMode(greenLed,OUTPUT);    
    
  }
  
  void loop(){
  
    digitalWrite(redLed,HIGH);    
    delay(1000);
    digitalWrite(yellowLed,HIGH);    
    delay(500);
    digitalWrite(redLed,LOW);
    digitalWrite(yellowLed,HIGH);    
    delay(1000);
    digitalWrite(yellowLed,LOW);
    digitalWrite(greenLed,HIGH);   
    delay(1000); 
    digitalWrite(greenLed,LOW);
    digitalWrite(yellowLed,HIGH);    
    delay(1000);
    digitalWrite(yellowLed,LOW);
    
  }
