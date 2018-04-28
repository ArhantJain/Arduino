#include<Wire.h>
byte fade;
void setup() {
  // put your setup code here, to run once:
 Wire.begin();
 pinMode(3, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 Wire.requestFrom(1,1);
 while(Wire.available())
 {
  fade = Wire.read();
  Serial.print(fade);
  analogWrite(3, fade);

  delay(1000);
 }
}
