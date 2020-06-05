void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
}

void loop() {
  int x = 0;
  while (digitalRead(2) == 0) {
    x++;
    Serial.println(x);
    delay(50);
  }
}
