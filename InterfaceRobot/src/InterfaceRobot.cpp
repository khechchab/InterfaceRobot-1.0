
#include "InterfaceRobot.h"
#include "Arduino.h"


char t[20];
static char data;
char ultra[4];
char tabservo[4];
char tabcap[4];
char tabline[6];

void MotorLeft(char d, int vit)
{
  Serial.write('A');
  Serial.write(d);
  sprintf(t, "%d", vit);
  Serial.write(t);
}
void StopLeft(void)
{
   Serial.write('A');
  Serial.write(0);
  sprintf(t, "%d", 0);
  Serial.write(t);
}

void MotorRight(char d, int vit)
{
  Serial.write('B');
  Serial.write(d);
  sprintf(t, "%d", vit);
  Serial.write(t);
}
void StopRight(void)
{
  Serial.write('B');
  Serial.write(0);
  sprintf(t, "%d", 0);
  Serial.write(t); 
}
int Ultra_L(int d)
{
  Serial.write('C');
  while (Serial.available() > 0)
  {
    for (int i = 0; i < 3; i++)
    {
      data = Serial.read();

      ultra[i] = data;
    }
  }
  int dis = atoi(ultra);

  if (d != 0)
  {
    if (dis >= d)
    {
      return true;
    }
    else
    {
      return false;
    }

  }
  else
  {
    return dis;
  }
}

int Ultra_R(int d)
{
  Serial.write('D');
  while (Serial.available() > 0)
  {
    for (int i = 0; i < 3; i++)
    {
      data = Serial.read();
      ultra[i] = data;
    }
  }
  int dis = atoi(ultra);
  if (d != 0)
  {
    if (dis >= d)
    {
      return true;
    }
    else
    {
      return false;
    }

  }
  else
  {
    return dis;
  }

}

void ServoMotor(int angle)
{
  Serial.write('E');
  sprintf(tabservo, "%d", angle);
  Serial.write(tabservo);
}
int LineFolower()
{
  Serial.write('F');
  while (Serial.available() > 0)
  {
    for (int i = 0; i < 8; i++)
    {
      data = Serial.read();

      tabcap[i] = data;
    }
  }
  int c = atoi(tabcap);

  return c;
}
int gyro(char axe)
{
int v;
  if (axe == 'Y')
  {
    Serial.write('Y');
    while (Serial.available() > 0)
    {
      for (int i = 0; i < 4; i++)
      {
        data = Serial.read();

        tabcap[i] = data;
      }
    }
    v = atoi(tabcap);
  }
  if (axe == 'R')
  {
    Serial.write('R');
    while (Serial.available() > 0)
    {
      for (int i = 0; i < 4; i++)
      {
        data = Serial.read();

        tabcap[i] = data;
      }
    }
  }
  v = atoi(tabcap);
  if (axe == 'P')
  {
    Serial.write('P');
    while (Serial.available() > 0)
    {
      for (int i = 0; i < 4; i++)
      {
        data = Serial.read();

        tabcap[i] = data;
      }
    }
    v = atoi(tabcap);
  }
  return v;
}
