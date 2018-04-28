void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float a = analogRead(0);
  float z = ((a*5)/1024);
  Serial.println (a);
  Serial.println (z);
  delay(2000);
}
