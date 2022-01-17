

#ifndef INTERFACEROBOT_H
#define INTERFACEROBOT_H


void MotorLeft(char d, int vit);
void StopLeft(void);
void MotorRight(char d, int vit);
void StopRight(void);
int Ultra_L(int d);
int Ultra_R(int d);
void ServoMotor(int angle);
int LineFolower(void);
int gyro(char axe);
#endif
