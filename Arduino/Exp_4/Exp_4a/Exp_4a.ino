void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = analogRead(0);
  int b = map(a,0,1023,0,255);
  analogWrite(3,b);
}
