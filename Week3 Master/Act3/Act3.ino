void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT);
}

void loop() {
  if (digitalRead(2) == 0) {
    Serial.println("Hello");
    digitalWrite(13, 1);
  } else {
    digitalWrite(13, 0);
  }
}
