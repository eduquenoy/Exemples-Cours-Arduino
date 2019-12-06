/*
  Classes
    
  Cours d'initiation à la programmation objet
  Héritage. Exemple d'un clignotant simple
  
  Eric DUQUENOY 
  Université du Littoral - Côte d'Opale
  Décembre  2019
  
  This example code is in Creative Commons : 
  https://creativecommons.org/licenses/by-nc/3.0/fr/

*/
  
#include "A_Led.h"  
#include "Cligno.h"
Cligno led(3,500); //Objet LED 


void setup() {
  Serial.begin(9600);
  Serial.println("Demarrage");
    
}

void loop() {
 
  led.swon();
  //delay(1000);
  led.swoff();
  //delay(1000);
}
