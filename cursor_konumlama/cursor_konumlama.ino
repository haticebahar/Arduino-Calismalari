
#include <LiquidCrystal.h>
//selact the pins used on the LCD panel
LiquidCrystal lcd(8,9,4,5,6,7);

void setup()
{
  lcd.begin(16,2);//start the library
}

void loop()
{
  
  lcd.setCursor(0,0);//cursor u konumlandı
  lcd.print("a");
  lcd.setCursor(0,1);//cursor u konumlandı
  lcd.print("b");
    lcd.setCursor(1,1);//cursor u konumlandı
  lcd.print("d");
   lcd.setCursor(1,0);//cursor u konumlandı
  lcd.print("c");
  
  
  
  


 
  
}
