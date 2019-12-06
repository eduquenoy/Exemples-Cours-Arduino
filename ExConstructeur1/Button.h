#ifndef _BUTTON_H      //tells compiler to compile this class only once 
#define _BUTTON_H

#include <Arduino.h>
class Button{
  private:
    int pinButton;
  public:
  Button(int);
  int getState();
};
#endif
