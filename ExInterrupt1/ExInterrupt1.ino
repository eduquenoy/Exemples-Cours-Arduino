/*
 Commande de LED par interruption
*/
//#include <PinChangeInterrupt.h>
#include "Button.h"  
#include "A_Led.h"  
Led led(4); //Objet LED 
Button button(3); //Objet Bouton

int etat,etat_old;

void setup() {
  Serial.begin(9600);
  etat=HIGH;
  etat_old = LOW;
  Serial.println("Demarrage");
//  attachPCINT(digitalPinToPCINT(4), blinkLed, CHANGE);  
attachInterrupt(digitalPinToInterrupt(3), blinkLed, RISING);
 // Manually blink once to test if LED is functional
  blinkLed();
  delay(1000);
  blinkLed();
}
void blinkLed(void) {
  // Switch Led state
   Serial.println("Changement d'état");
  led.sw();
}

void loop() {}
/*
  etat = button.getState();
  //etat = LOW;
  if(etat == HIGH){
  led.swon();
  delay(1000);                       // wait for a second
  led.swoff();
  }
  else{
    led.swoff();
  }
  if(etat != etat_old){
    Serial.println("Nouvel etat");
    etat_old = etat;
  }
}
class Etat{
  private:
    int etat;
  public:
  Etat();
  void changeEtat();
  int getEtat();
};
Etat::Etat(){
}
void Etat::changeEtat(){  
}
int Etat::getEtat(){
  return etat;
}*/
