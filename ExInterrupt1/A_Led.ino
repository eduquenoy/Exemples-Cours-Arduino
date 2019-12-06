#include "A_Led.h"  
Led::Led(int _pinLed){//Constructor
    pinLed = _pinLed;
    pinMode(pinLed, OUTPUT);
    stateLed = LOW; //Initial state
}
void Led::swon(){//Switch the LED on
  stateLed = HIGH;
  setLed(stateLed);
    //digitalWrite(pinLed, HIGH);   // turn the LED on (HIGH is the voltage level)
}
void Led::swoff(){//Switch the LED off
  stateLed = LOW;
  setLed(stateLed);
 // digitalWrite(pinLed, LOW);    // turn the LED off by making the voltage LOW
}
void Led::sw(){//Toggle the LED's state 
  //Change the LED's state
  stateLed = !stateLed;
  setLed(stateLed);
//  digitalWrite(pinLed, !digitalRead(pinLed));
  
}
void Led::setLed(int state) {

 digitalWrite(pinLed, state);
}
