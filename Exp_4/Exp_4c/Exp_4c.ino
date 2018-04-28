#include<avr/interrupt.h>
volatile int count = 0;
unsigned long int prev=0,curr=0;
void Isr()
{
  count = count + 1;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 // pinMode(A0,INPUT);
  pinMode(6,OUTPUT);
  pinMode(2,INPUT);
  int prev = millis();
  attachInterrupt(digitalPinToInterrupt(2),Isr,RISING);
}

void loop() {
  // put your main code here, to run repeatedly:
  curr = millis();
  int a = analogRead(0);
  int b = map(a,0,1023,0,255);
  analogWrite(6,b);
  if(curr - prev >= 1000)
  {
    detachInterrupt(digitalPinToInterrupt(2));
    float ans = (float)count/20;
    Serial.print("Rps is ");
    Serial.print(ans);
    Serial.print("\n");
    prev = curr;
    count=0;
    attachInterrupt(digitalPinToInterrupt(2),Isr,RISING);
  }
}
