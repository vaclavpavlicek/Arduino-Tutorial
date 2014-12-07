#include <LiquidCrystal.h>
int buttonPlusPin = 2;
int buttonMinusPin = 3;

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);           
int buttonPlusState = 0;
int buttonMinusState = 0;

int number = 0;

void setup() {
  lcd.begin(16, 2);
  lcd.print("0");
  pinMode(buttonPlusPin, INPUT);     
  pinMode(buttonMinusPin, INPUT);       
}

void loop(){  
  buttonPlusState = digitalRead(buttonPlusPin);  
  buttonMinusState = digitalRead(buttonMinusPin);  
    
  if (buttonPlusState == HIGH) {     
        lcd.clear();
        number++;
        lcd.print(number);
        delay(500);
  } 
  else {

  }
  
    if (buttonMinusState == HIGH) {     
        lcd.clear();
        number--;
        lcd.print(number);
        delay(500);
  } 
  else {

  }
  
}
