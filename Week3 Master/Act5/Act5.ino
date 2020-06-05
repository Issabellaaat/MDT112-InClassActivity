void setup() {
  Serial.begin(9600);

  for (int i = 0; i <= 100; i++) {
    if (i % 5 != 0) {
      continue;
    }
    Serial.println(i);
  }
}

void loop() {}
