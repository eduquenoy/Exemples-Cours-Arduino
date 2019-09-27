/*
  Operateurs de Base
  
  Cours d'initiation à la programmation objet
  
  Eric DUQUENOY 
  Université du Littoral - Côte d'Opale
  Septembre 2019
  
  This example code is in Creative Commons : 
  https://creativecommons.org/licenses/by-nc/3.0/fr/

*/

#include "constantes.h"

int n,p;

// La fonction setup est appelée une fois au démarrage
void setup() {
  Serial.begin(9600);//Initialise le port série (pour l'affichage dans la fenêtre Moniteur)
  n = 0x01;
}

// La fonction loop crée une boucle infinie
void loop() {

  Serial.print("n : ");
  Serial.print(n,BIN); //On peut choisir une représentation en base 2,8, 10 ou 16
  n = n<<1; //Décalage d'une position vers la gauche
  delay(1000);
  if(n == 0){
    n=1;
  }
}
