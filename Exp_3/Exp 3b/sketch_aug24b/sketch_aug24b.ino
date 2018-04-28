void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  double a = analogRead(0);
  double z = ((a*5)/1024);
  float b = 27.86*(pow(z,(-1.15)));
  Serial.println (z);
  Serial.println (b);
  Serial.println ();
  delay(750);
}
