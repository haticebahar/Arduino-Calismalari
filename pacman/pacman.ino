#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);

#define sag 0
#define ust 1
#define alt 2
#define sol 3
#define secim 4
#define yok 5

int score=0;
int okunan;


int tus_oku()
{
  okunan=analogRead(0);
  if(okunan > 1000) return yok;
  if(okunan < 50) return sag;
  if(okunan < 195) return ust;
  if(okunan < 380) return alt;
  if(okunan < 555) return sol;
  if(okunan < 700) return secim;
  return yok;
}
  

  void setup()
  {
   
    
  }
  
  void loop ()
  {
    if(tus_oku()==ust) s=0;
    if(tus_oku()==alt) s=1;
    if(tus_oku()==sag) if(k<16)k++;
    if(tus_oku()==sol) if(k>0)k--;
    
       lcd.setCursor(k,s);
       lcd.write(byte(k%2));
       delay(300);
       
       lcd.setCursor((k),s);
       lcd.print(" ");
  }
