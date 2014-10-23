int ledka = 13;

void setup(){

  pinMode(ledka,OUTPUT);
  
}

void loop(){

  digitalWrite(ledka,HIGH);
  delay(1000);
  digitalWrite(ledka,LOW);
  delay(1000);
  
}
