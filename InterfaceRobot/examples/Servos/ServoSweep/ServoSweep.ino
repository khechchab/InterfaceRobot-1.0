#include <InterfaceRobot.h>

void setup() {
 Serial.begin(9600);
}

void loop() {

//deplacer le servomotor de l'angle 180 vers l'angle 0 avec un pas de 10.
for(int angle=0;angle<=180;angle+=10)
{
  ServoMotor(angle);
    delay(500);
}
}
