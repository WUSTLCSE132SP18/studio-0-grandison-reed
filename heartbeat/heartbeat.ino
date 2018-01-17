
void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  unsigned long times= millis();
  //int check= millis();
  digitalWrite(13,HIGH);
  delay(100);
  digitalWrite(13,LOW);
  Serial.print(int(times/1000));
  Serial.println(" seconds have elapsed.");
  //Serial.print(check);
  //Serial.println(" milliseconds.");
  delay(1000);

}
