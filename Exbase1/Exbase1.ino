/*
  Illustration de l'usage de la directive #define
  
  Cours d'initiation à la programmation objet
  
  Eric DUQUENOY 
  Université du Littoral - Côte d'Opale
  June 2019
  
  This example code is in Creative Commons : 
  https://creativecommons.org/licenses/by-nc/3.0/fr/

*/
#define PORT_LED 4
#define ALLUME 1
#define ETEINT 0

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
