#include<Wire.h>

void setup() {
  // put your setup code here, to run once:
  Wire.begin(1);
  Wire.onReceive(func);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   delay(20);
}

void func(int)
{
  while(Wire.available()!=0)
  {
    int flag = Wire.read();
    int c = Wire.read();
    if(flag == '1')
    {
      Serial.print(c);
      Serial.print("\t");
    }
    else
    Serial.println(c); 
  }
}

