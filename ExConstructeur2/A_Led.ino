#include "A_Led.h"  
#define PORTLED 3
Led::Led(int port){
    pinLed = port;
    pinMode(pinLed, OUTPUT);
}
Led::Led(){
    pinLed = PORTLED;
    pinMode(pinLed, OUTPUT);
}

void Led::swon(){
    digitalWrite(pinLed, HIGH);   // turn the LED on (HIGH is the voltage level)
}
void Led::swoff(){
  digitalWrite(pinLed, LOW);    // turn the LED off by making the voltage LOW
}
