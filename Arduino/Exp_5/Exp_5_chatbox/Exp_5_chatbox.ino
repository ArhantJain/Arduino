#include<Wire.h>

void setup() {
  // put your setup code here, to run once:
 Wire.begin(1);
 Wire.onReceive(func);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 while(Serial.available())
 {
  Wire.beginTransmission(2);
  char ch = Serial.read();
  Wire.write(ch);
  
  Wire.endTransmission();
 }
}

void func()
{
  while(Wire.available())
  {
    char ch = Wire.read();
    Serial.print(ch);
  }
}

