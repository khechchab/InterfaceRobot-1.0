#include <InterfaceRobot.h>

#define PinAnalog A0  // broche analogique utilisée pour connecter le potentiomètre

void setup() {
 Serial.begin(9600);           // initialise le port série :
 pinMode(PinAnalog,INPUT);    // initialise la broche du potentiomètre en entrée :
 
}

void loop() {

int val =analogRead(PinAnalog);   //lit la valeur du potentiomètre (valeur entre 0 et 1023)
map(val,0,1023,0,180);           //redimensionnez-le pour l'utiliser avec le servo (valeur entre 0 et 180)
ServoMotor(val);                // définit la position du servo en fonction de la valeur mise à l'échelle
delay(15);                     // attend que le servo y arrive

}
