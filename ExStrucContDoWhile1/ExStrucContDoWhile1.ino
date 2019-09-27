/*
  Structures de contrôle
    
  Cours d'initiation à la programmation objet
  
  Eric DUQUENOY 
  Université du Littoral - Côte d'Opale
  Septembre 2019
  
  This example code is in Creative Commons : 
  https://creativecommons.org/licenses/by-nc/3.0/fr/

*/

#include "constantes.h"
int i,n;

// La fonction setup est appelée une fois au démarrage
void setup() {
  pinMode(PORT_LED, OUTPUT);
  Serial.begin(9600);//Initialise le port série (pour l'affichage dans la fenêtre Moniteur)
  i = 6;
  n = 5;
   do{
    digitalWrite(PORT_LED, ALLUME);   // Allume la LED
    delay(100);                       // Attente d'une seconde
    digitalWrite(PORT_LED, ETEINT);    // Eteint la LED
    delay(1000);                       // Attente d'une seconde
    i++;
    Serial.print("i = ");
    Serial.println(i);
  } while(i < n);
}
void loop() {
}
