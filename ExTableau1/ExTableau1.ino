/*
  Tableau à une dimension
    
  Cours d'initiation à la programmation objet
  
  Eric DUQUENOY 
  Université du Littoral - Côte d'Opale
  Octobre 2019
  
  This example code is in Creative Commons : 
  https://creativecommons.org/licenses/by-nc/3.0/fr/

*/

#include "constantes.h"
int i=0;
int motif[10];

void setup() {
  pinMode(PORT_LED, OUTPUT);
  Serial.begin(9600);//Initialise le port série (pour l'affichage dans la fenêtre Moniteur)
  motif[0] = 1;
  motif[1] = 1;
  motif[2] = 0;
  motif[3] = 1;
  motif[4] = 1;
  motif[5] = 0;
  motif[6] = 1;
  motif[7] = 1;
  motif[8] = 0;
  motif[9] = 1;
}
void loop() {
  if(i > 9) {i = 0;}
  if(motif[i] == 1){
    digitalWrite(PORT_LED, ALLUME);   // Allume la LED
    delay(DUREE_BASE_ALLUME); 
      Serial.println("LED allumée");
  }
  else{
    digitalWrite(PORT_LED, ETEINT);    // Eteint la LED
  delay(DUREE_BASE_ETEINT);
      Serial.println("LED éteinte");
  }

  i++;
}
