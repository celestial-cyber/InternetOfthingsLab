//To connect the led at digital pin 13 and switch at digital pin 5 - and control using switch 
const int ledpin= 13;
const int buttonpin = 2;
bool ledstate = 0;
bool lastbuttonstate = 1;
bool currentButtonState;

void setup(){
    pinMode(ledpin, OUTPUT);
    pinMode(buttonpin, INPUT_PULLUP);
}

void setup(){
    
    currentButtonState=digitalRead(buttonpin);
    if (lastbuttonstate == 1 && currentButtonState==0){
        ledstate=!ledstate;
        digitalWrite(ledpin,ledstate);
        delay(200);
    }
    lastbuttonstate=currentButtonState;

}