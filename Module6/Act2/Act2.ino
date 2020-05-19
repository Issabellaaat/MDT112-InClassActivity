long lastTimeStateChange = 0;
String state = "ON";

void setup(){
    pinMode(5,OUTPUT);
}
void loop(){
    long currentTime = millis();

    if (state == "ON" && currentTime - lastTimeStateChange >= 500){
        state = "OFF";
        lastTimeStateChange = currentTime;
    }else if (state == "OFF" && currentTime - lastTimeStateChange >= 500) {
        state = "ON";
        lastTimeStateChange = currentTime;
    }

    if(state == "ON"){
        digitalWrite(5, 1);
    }else if (state == "OFF"){
        digitalWrite(5, 0);
    }
}