bool lastState = true;
void setup()
{
    Serial.begin(9600);                         //show in monitor
    pinMode(2, INPUT_PULLUP);
}
int count = 0;
void loop()
{
    bool currentState = digitalRead(2);

   //Serial.println("currentState : " + String(currentState) + "lastState :" + String(lastState));

    if(lastState > currentState)                //past > current
    {
        count++;
        Serial.println("State Falling");        //show State Falling
        tone(8,200,100);                        // first beep
        delay(250);
        tone(8,400,100);                        // second beep
    }

   if(lastState < currentState)                 //past > current
   {
    Serial.println("State Rising");             //show State Rising
    tone(8,400,100);                            //beep after let go of the button
    Serial.println(count);
   }

    lastState = currentState;
    delay(50);
}