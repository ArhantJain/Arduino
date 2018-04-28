//https://drive.google.com/open?id=0BxRL2ZSJM_ALR01QRFluenB6U3M

#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int d = 25;
int m = 8;
int h=23,mi=59,s=50;
  
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Time      ");
  lcd.setCursor(11,0);
  lcd.print(" Date");
}

void loop() {
  // put your main code here, to run repeatedly:  
  if(d==30)
  {
    d=0;
    m++;
  }
  while(h<=24)
  {
    if(h==24)
    {
      d++;
      h=0;
      break;
    }
    while(1)
    {
      if(mi==60)
      {
        h++;
        mi=0;
        break;
      }
      while(1)
      {
        if(s==59)
        { 
          s=-1;
          mi++;
          break;
        }

        delay(1000);
        s++;
        lcd.setCursor(0,1);
        if(h<10)
        {
          lcd.print("0");
          lcd.print(h);
        }
        else
        {
          lcd.print(h);
        }
        lcd.print(":");
        if(mi<10)
        {
          lcd.print("0");
          lcd.print(mi);
        }
        else
        {
          lcd.print(mi);
        }
        lcd.print(":");
        if(s<10)
        {
          lcd.print("0");
          lcd.print(s);
        }
        else
        {
          lcd.print(s);
        }
        lcd.print(" ");
        lcd.setCursor(9,1);
        lcd.print("  ");
        if(d<10)
        {
          lcd.print("0");
          lcd.print(d);
        }
        else
        {
          lcd.print(d);
        }
        lcd.print("/");
        if(m<10)
        {
          lcd.print("0");
          lcd.print(m);
        }
        else
        {
          lcd.print(m);
        }
          lcd.print(" ");
 
      }
    }
   
  }
}  
