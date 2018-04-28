#include<Wire.h>
int c1 = 0;
int c2 = 3131;

void setup() {
  // put your setup code here, to run once:
  Wire.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  Wire.beginTransmission(1);
  Wire.write('1');
  Wire.write(c1);
  c1 = (c1+1)%16;
  Wire.endTransmission();
  delay(500);
  Wire.beginTransmission(1);
  Wire.write('2');
  Wire.write(c2);
  c2 = (c2-1)%16;
  Wire.endTransmission();
  delay(500);
}
