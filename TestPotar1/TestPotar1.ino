/*
  Lecture du potentiomètre Grove
  
  Cours d'initiation à la programmation objet
  
  Eric DUQUENOY 
  Université du Littoral - Côte d'Opale
  June 2019
  
  This example code is in Creative Commons : 
  https://creativecommons.org/licenses/by-nc/3.0/fr/

*/
#define TRACE 1
#include "constantes.h"

int valPotar; //Pour recueillir la valeur du potentiomètre

// La fonction setup est appelée une fois 
void setup() {
  // Initialise la broche digitale PORT_LED en mode sortie.
  Serial.begin(9600);//Initialise le port série (pour l'affichage dans la fenêtre Moniteur)
}

// La fonction loop crée une boucle infinie
void loop() {
  valPotar = analogRead(POTPIN);
  
  #if TRACE
//  Serial.print("Valeur du potentiomètre : ");
  Serial.println(valPotar);
  #endif

  delay(15);                       // Attente de 15ms
}
