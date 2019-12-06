/*
  Classes
    
  Cours d'initiation à la programmation objet
  Constructeur sans paramètre
  
  Eric DUQUENOY 
  Université du Littoral - Côte d'Opale
  Décembre  2019
  
  This example code is in Creative Commons : 
  https://creativecommons.org/licenses/by-nc/3.0/fr/

*/

#include "Button.h"  
#include "A_Led.h"  
Led led; //Objet LED 
Button button(4); //Objet Bouton

int etat,etat_old;

void setup() {
  Serial.begin(9600);
  etat=HIGH;
  etat_old = LOW;
  Serial.println("Demarrage");
    
}

void loop() {
  etat = button.getState();
  Serial.print("Etat du bouton :");
  Serial.println(etat);
  //etat = LOW;
  if(etat == HIGH){
  led.swon();
//  delay(1000);                       // wait for a second
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
}
