/*
  Variables en langage C
  
  Cours d'initiation à la programmation objet
  
  Eric DUQUENOY 
  Université du Littoral - Côte d'Opale
  Aout 2019
  
  This example code is in Creative Commons : 
  https://creativecommons.org/licenses/by-nc/3.0/fr/

*/

#include "constantes.h"

int dureeAllume;//On définit une variable pour la durée à l'état allumé
int dureeEteint;//On définit une variable pour la durée à l'état éteint
int i; /* déclaration de la variable i */
char c; /* déclaration du caractère c */
float pi;
long j,k;
double r;
// La fonction setup est appelée une fois au démarrage
void setup() {
  // Initialise la broche digitale PORT_LED en mode sortie.
  pinMode(PORT_LED, OUTPUT);
  Serial.begin(9600);//Initialise le port série (pour l'affichage dans la fenêtre Moniteur)

  //Initialiser les variables 
  dureeAllume = DUREE_BASE_ALLUME;
  dureeEteint = 100;
  pi = 3.14;
  c = 'a';
  r = 6.2879821365;
}

// La fonction loop crée une boucle infinie
void loop() {

  Serial.println(r,20);
  Serial.println(pi);
  Serial.println(c);
  Serial.print("Bonjour : ");
  Serial.print(pi,5);
  digitalWrite(PORT_LED, ALLUME);   // Allume la LED
  delay(dureeAllume);                       // Attente d'une seconde
  digitalWrite(PORT_LED, ETEINT);    // Eteint la LED
  delay(dureeEteint);                       // Attente d'une seconde
}
