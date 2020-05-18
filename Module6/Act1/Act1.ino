bool lastState = true;
void setup(){
    pinMode(2,INPUT_PULLUP);
    Serial.begin(9600);
}
void loop(){
    bool currenState = digitalRead(2);

    if (lastState > currenState) {
     delay(20);
     if (digitalRead(2) == LOW) {
         Serial.println("State FALLING with Debounce");
     }
    }
    lastState = currenState;

    /* Serial.println("currentState : " + String(currenState) +
    "lastState : " + String(lastState));*/
    delay(50);
}