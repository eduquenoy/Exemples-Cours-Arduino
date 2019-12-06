#ifndef _ALED_H      //tells compiler to compile this class only once 
#define _ALED_H

#include <Arduino.h>
class Led{
  private:
  int pinLed;
  int stateLed;
  void setLed(int);
   public:
    Led (int);
    void swon();
    void swoff();
    void sw();
};
#endif
