#include <InterfaceRobot.h>
void setup() {
  // initialise le port série :
Serial.begin(9600);     
}

void loop() {
int cap=LineFolower();
switch(cap)
{
  case 0: Serial.println("000");  // dans ce cas les trois capteurs sont a l'etat { capteur(1)='0' capteur(2)='0' capteur(3)='0'}.
///////////////////////////////////////////////
//     code pour comander les moteurs         // 
///////////////////////////////////////////////
  break; 
  case 1: Serial.println("001"); // dans ce cas les trois capteurs sont a l'etat { capteur(1)='0' capteur(2)='0' capteur(3)='1'}.
///////////////////////////////////////////////
//     code pour comander les moteurs         // 
///////////////////////////////////////////////
  break;
  case 2: Serial.println("010");// dans ce cas les trois capteurs sont a l'etat { capteur(1)='0' capteur(2)='1' capteur(3)='0' }.
///////////////////////////////////////////////
//     code pour comander les moteurs         // 
///////////////////////////////////////////////
  break;
  case 3: Serial.println("011");// dans ce cas les trois capteurs sont a l'etat { capteur(1)='0' capteur(2)='1' capteur(3)='1' }.
//////////////////////////////////////////////
//     code pour comander les moteurs         // 
///////////////////////////////////////////////
  break;
  case 4: Serial.println("100");// dans ce cas les trois capteurs sont a l'etat { capteur(1)='1' capteur(2)='0' capteur(3)='0' }.
///////////////////////////////////////////////
//     code pour comander les moteurs         // 
///////////////////////////////////////////////
  break;
  case 5: Serial.println("101"); // dans ce cas les trois capteurs sont a l'etat { capteur(1)='1' capteur(2)='0' capteur(3)='1' }.
///////////////////////////////////////////////
//     code pour comander les moteurs         // 
///////////////////////////////////////////////
  break;
  case 6: Serial.println("110");// dans ce cas les trois capteurs sont a l'etat { capteur(1)='1' capteur(2)='1' capteur(3)='0' }.
///////////////////////////////////////////////
//     code pour comander les moteurs         // 
///////////////////////////////////////////////
break;
  case 7: Serial.println("111"); // dans ce cas les trois capteurs sont a l'etat { capteur(1)='1' capteur(2)='1' capteur(3)='1' }.
///////////////////////////////////////////////
//     code pour comander les moteurs         // 
///////////////////////////////////////////////
  break;
}
}
