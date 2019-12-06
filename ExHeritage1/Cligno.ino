#include "Cligno.h"  
#include "A_Led.h" 
#include <Arduino.h>
Cligno::Cligno(int port,int delayC) : Led(port){
//  delayCligno = 1000;
delayCligno = delayC;
}
void Cligno::swon(){
  
  Led::swon();
  delay(delayCligno);
}
void Cligno::swoff(){
  Led::swoff();
  delay(delayCligno);
}
