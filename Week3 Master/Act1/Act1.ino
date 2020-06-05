void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  digitalWrite(2, 1);
  digitalWrite(3, HIGH);
  delay(500);

  digitalWrite(2, 0);
  digitalWrite(3, LOW);
  delay(500);
}
