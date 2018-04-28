#include<Wire.h>
byte value;
void setup() {
  // put your setup code here, to run once:
  Wire.begin(1);
  Wire.onRequest(func);  
}

void loop() {
  // put your main code here, to run repeatedly:
 
}

void func()
{
  int a = analogRead(0);
  int value = map(a,0,1023,0,255);
  Wire.write(value);
}

