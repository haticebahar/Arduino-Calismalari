//veri gelene kadar extra bir işlem yapamaz. Veri gelmeden bekleme den çıkmaz
//eğer bekleme esnasındA BİR İŞLEM YAPILMAK İSTENİRSE bekleme için olan while in içine yazılır

int x=0,toplam,carpim,bolum,fark;
int s1,s2;

void setup()//ayarlama kısmı
{
  randomSeed(analogRead(0));
    Serial.begin(9600); //seri iletişimi başlatır , seri iletişimi yaparken 9600 hızı olacak
}
void loop()
{
  if(Serial.available()==0)
  {
 
    s1=Serial.parseInt();//seri iletişim varsa girer yoksa atlar
    Serial.println(s1);
    x=1;
  
  }
  
  if(Serial.available()==0)
  {
 
    s2=Serial.parseInt();
    Serial.println(s2);
    x=2;
  }
  
    toplam=s1+s2;
    fark=s1-s2;
    bolum=s1/s2;
    carpim=s1*s2;
     Serial.print("s1=");
  Serial.println(s1);
  Serial.print("s2=");
  Serial.println(s2);
  Serial.print("Toplam=");
  Serial.println(toplam);
  Serial.print("Fark=");
  Serial.println(fark);
  Serial.print("carpim=");  
  Serial.println(carpim);
  Serial.print("bolum=");  
  Serial.println(bolum);
  delay(2000);
while(1){}  
  
  }
  

