/*
  Illustration de l'usage de la directive #include
  
  Cours d'initiation à la programmation objet
  
  Eric DUQUENOY 
  Université du Littoral - Côte d'Opale
  June 2019
  
  This example code is in Creative Commons : 
  https://creativecommons.org/licenses/by-nc/3.0/fr/

*/
#include "constantes.h"
// La fonction setup est appelée une fois 
void setup() {
  // Initialise la broche digitale PORT_LED en mode sortie.
  pinMode(PORT_LED, OUTPUT);
}

// La fonction loop crée une boucle infinie
void loop() {
  digitalWrite(PORT_LED, ALLUME);   // Allume la LED
  delay(1000);                       // Attente d'une seconde
  digitalWrite(PORT_LED, ETEINT);    // Eteint la LED
  delay(1000);                       // Attente d'une seconde
}
