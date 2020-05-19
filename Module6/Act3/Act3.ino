void myFunction(){
    Serial.println("Hi, This is interrupt state");
}
void setup(){
    pinMode(2, INPUT_PULLUP);
    Serial.begin(9600);

    pinMode(5,OUTPUT);

    noInterrupts();
    attachInterrupt(0,myFunction,FALLING);
}
void loop(){
    digitalWrite(5,1);
    delay(2000);

    digitalWrite(5,0);
    delay(2000);
}