#include <InterfaceRobot.h>
#define vit1 100
#define vit2 50
void setup() {

  Serial.begin(9600);                             // initialise le port série :
}

void loop() {

  MotorLeft('f', vit1);                           // premier moteur tourne dans le premier sens avec une vitesse de pwm de 100.
  delay(2000);
  StopLeft();                                     // arreter le premier moteur.
  delay(2000);


  MotorLeft('b', vit1);                          // premier moteur tourne dans le deuxieme sens avec une vitesse de pwm de 100.
  delay(2000);
  StopLeft();                                    // arreter le premier moteur.
  delay(2000);


  MotorRight('f', vit2);                          // deuxieme moteur tourne dans le premier sens avec une vitesse de pwm de 50.
  delay(2000);
  StopRight();                                   // arreter le deuxieme moteur.
  delay(2000);


  MotorRight('b' , vit2);                         // deuxieme moteur tourne dans le deuxieme sens avec une vitesse de pwm de 50.
  delay(2000);
  StopRight();                                     // arreter le deuxieme moteur.
  delay(2000);
}
