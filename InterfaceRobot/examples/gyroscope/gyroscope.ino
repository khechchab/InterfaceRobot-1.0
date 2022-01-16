#include <InterfaceRobot.h>
void setup() {
  Serial.begin(9600);  // initialise le port série :
}

void loop() {
  //on utilise l'argument (P) pour extraire l'angle du pitch.
  int pitch  = gyro('P');
  Serial.println(pitch);              //afficher l’angle de l’axe des X.
  delay(1000);

  //on utilise l'argument (Y) pour extraire l'angle du pitch
  int yaw  = gyro('Y');
  Serial.println(yaw);               //afficher l’angle de l’axe des Y.
  delay(1000);

  //on utilise l'argument (R) pour extraire l'angle du pitch
  int roll  = gyro('R');
  Serial.println(roll);            //afficher l’angle de l’axe des Z.
   delay(1000);
}
