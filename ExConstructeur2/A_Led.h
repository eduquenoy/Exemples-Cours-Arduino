#ifndef _ALED_H      //tells compiler to compile this class only once 
#define _ALED_H

//#include <Arduino.h>
class Led{
  private:
  int pinLed;
   public:
    Led (int);
    Led();
    void swon();
    void swoff();
};
#endif
