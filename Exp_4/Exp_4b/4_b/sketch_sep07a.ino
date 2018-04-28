long int prev,curr=0,rpm;
volatile int count=0;
void setup() {
  pinMode(0,INPUT);
  pinMode(5,OUTPUT);
  prev=millis();
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(2),Interupt,RISING);
}



void loop() {
    int a=analogRead(A0);
    int b=map(a,0,1023,0,255);
    analogWrite(5,b);  
    curr=millis();
    //Serial.print(count);
    if(curr-prev>=1000)
    {
    //  detachInterrupt();
      detachInterrupt(digitalPinToInterrupt(2));
      rpm=count*3;
      prev=curr;
     // Serial.print(count);
      count=0;
      Serial.print(" RPM is ");
      Serial.println(rpm);
      attachInterrupt(digitalPinToInterrupt(2),Interupt,RISING);
      //attachInterrupt();
    }
    
}
void Interupt()
{
  count++;
}
