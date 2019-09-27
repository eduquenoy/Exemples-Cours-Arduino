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

int a;

// La fonction setup est appelée une fois au démarrage
void setup() {
  Serial.begin(9600);//Initialise le port série (pour l'affichage dans la fenêtre Moniteur)
  
  Serial.print("'a = 2+3' → a = ");
  Serial.println(2+3); 

  Serial.print("'a = 5%2' → a = ");
  Serial.println(5%2); 

  Serial.print("'a = (3==3)' → a = ");
  Serial.println(3==3); 

  Serial.print("'a = (6==5)' → a = ");
  Serial.println(6==5); 

  Serial.print("'a = (2!=3)' → a = ");
  Serial.println(2!=3); 

  Serial.print("'a = (6<=3)' → a = ");
  Serial.println(6<=3); 

  Serial.print("'a = !1' → a = ");
  Serial.println(!1); 

  Serial.print("'a =((3==3) || (6<=3))' → a = ");
  Serial.println((3==3) || (6<=3)); 

  Serial.print("'a =((3==3) && (6<=3))' → a = ");
  Serial.println((3==3) && (6<=3)); 
}

// La fonction loop crée une boucle infinie
void loop() {

  delay(1000);
}

/*a = 2+3 → valeur de a : 5
a = 5%2 → valeur de a : 1
a = (3==3) →  valeur de a : 1
a = (6==5) → valeur de a : 0
a = (2!=3) → valeur de a : 1
a = (6<=3) → valeur de a : 0
a = !1 → valeur de a : 0
a =((3==3) || (6<=3)) → valeur de a : 1
a =((3==3) && (6<=3)) → valeur de a : 0
*/
