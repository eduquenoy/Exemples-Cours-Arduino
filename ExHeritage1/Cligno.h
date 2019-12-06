#ifndef Cligno_H      //tells compiler to compile this class only once 
#define Cligno_H
#include "A_Led.h"  
#include <Arduino.h>
class Cligno : public Led {
private:
  int delayCligno;
public:
  Cligno(int,int);
  void swon();
  void swoff();
 
};
#endif
