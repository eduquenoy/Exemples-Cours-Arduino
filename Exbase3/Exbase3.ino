/*
  Illustration de l'usage de la directive #if
  
  Cours d'initiation à la programmation objet
  
  Eric DUQUENOY 
  Université du Littoral - Côte d'Opale
  June 2019
  
  This example code is in Creative Commons : 
  https://creativecommons.org/licenses/by-nc/3.0/fr/

*/

//On définit une constante TRACE
#define TRACE 1
#include "constantes.h"
// La fonction setup est appelée une fois au démarrage
void setup() {
  // Initialise la broche digitale PORT_LED en mode sortie.
  pinMode(PORT_LED, OUTPUT);
  Serial.begin(9600);//Initialise le port série (pour l'affichage dans la fenêtre Moniteur)
}

// La fonction loop crée une boucle infinie
void loop() {

  #if TRACE
  Serial.println(PORT_LED); //Cette partie ne sera compilée (et donc incluse dans le code), que si TRACE est à 1
  #endif
  digitalWrite(PORT_LED, ALLUME);   // Allume la LED
  delay(100);                       // Attente d'une seconde
  digitalWrite(PORT_LED, ETEINT);    // Eteint la LED
  delay(1000);                       // Attente d'une seconde
}
