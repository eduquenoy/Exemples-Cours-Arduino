/*
  Lecture d'un valeur issue d'Arduino 
  
  Cours d'initiation à la programmation objet
  
  Eric DUQUENOY 
  Université du Littoral - Côte d'Opale
  June 2019
  
  This example code is in Creative Commons : 
  https://creativecommons.org/licenses/by-nc/3.0/fr/

*/
import processing.serial.*;
Serial myPort;   
 
/* Pour connaitre le numéro du port à utiliser
import processing.serial.*;
Serial myPort;  
void setup(){
  printArray(Serial.list());
}
void draw(){}
Réponse :
[0] "COM3"
[1] "COM10"
Sur Arduino, on relève le port
 (menu "Outils"). Par exemple COM10
Sur Processing on utilisera alors 1 dans l'instruction Serial.list()[1]
*/

float var1;
 
void setup() {
  myPort = new Serial(this, Serial.list()[1], 9600);//Il faut fixer le numéro du port
  //Important : se caler sur la valeur en baud du prog Arduino
  myPort.bufferUntil('\n');
}
 
void draw() {
  }
 
void serialEvent (Serial myPort) {
 
background(0); //efface l'écran à chaque boucle
 
 String inString = myPort.readStringUntil('\n');
 if (inString != null){
 
 inString = trim(inString);
// int inputs[] = int(split(inString,',')); // on élude les virgules
 int input = int(inString); // on élude les virgules
 
// on récupère la valeur
  //if(inputs.length == 1){
   var1 = input;//[0];
//   var2 = inputs[1];
 //  var3 = inputs[2];
 
 // On ré-échelonne la valeur analogique en valeur RGB
 //var1 = map(var1, 0, 1023, 0, 255);
 //var2 = map(var2, 0, 1023, 0, 255);
 //var3 = map(var3, 0, 1023, 0, 255);
 println(var1);
 
 //}
 
  background (var1,0,0);  
 
}
}
