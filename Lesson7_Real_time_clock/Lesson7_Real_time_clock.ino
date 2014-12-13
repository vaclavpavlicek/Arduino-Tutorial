#include <DS1307.h>
#include <WProgram.h>
#include <Wire.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);           
// vytvoří pole čísel do kterých se bude ukládat čas
int rtc[7];
 
void setup()
{    
  lcd.begin(16, 2);
}
void loop()
{
  RTC.get(rtc,true);  
  char cas[9];  
  sprintf(cas, "%02d:%02d:%02d", rtc[2],rtc[1],rtc[0]);  
  lcd.clear();
  lcd.print(cas); 
  delay(1000); 
}
