#include "Button.h"  

Button::Button(int _pinButton){
  pinButton = _pinButton;
  pinMode(pinButton, INPUT);
//  digitalWrite(pinButton, HIGH); // Pullup interne sur le bouton
}
int Button::getState(){
  int _etat;
  _etat = digitalRead(pinButton);
  return _etat;
}
