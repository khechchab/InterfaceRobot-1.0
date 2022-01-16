#include <InterfaceRobot.h>

#define distance_L 30
#define distance_R 80
void setup() {
  Serial.begin(9600);             // initialise le port série :
}

void loop() {
  // afficher la distance en centimetre du capteur gauche
  int d0 = Ultra_L(0);
  delay(2000);


  // comparer la distance du capteur en centimetre du capteur gauche avec une consigne
  int d1 = Ultra_L(distance_L);
  delay(2000);


  // afficher la distance en centimetre du capteur droit
  int d2 = Ultra_R(0);
  delay(2000);


  // comparer la distance du capteur en centimetre du capteur droit avec une consigne
  int d3 = Ultra_R(distance_R);
  delay(2000);


}
