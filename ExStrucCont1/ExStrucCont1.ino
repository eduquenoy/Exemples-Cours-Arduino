/*
  Structures de contrôle
    
  Cours d'initiation à la programmation objet
  
  Eric DUQUENOY 
  Université du Littoral - Côte d'Opale
  Septembre 2019
  
  This example code is in Creative Commons : 
  https://creativecommons.org/licenses/by-nc/3.0/fr/

*/


int i,s;

// La fonction setup est appelée une fois au démarrage
void setup() {
  Serial.begin(9600);//Initialise le port série (pour l'affichage dans la fenêtre Moniteur)
  
/*somme des 100 premiers entiers*/
  s= 0;
  for(i=0;i<100;i = i+1){
    s+=i;
  }
  Serial.print("s = ");
  Serial.println(s);}

void loop() {
}
