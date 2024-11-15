#include "temperature_system.h"
#include "Arduino.h"
#include "main.h"


void init_temperature_system(void)
{
  //config pins for temp system
  pinMode(HEATER,OUTPUT);
  pinMode(COOLER,OUTPUT);

  pinMode(TEMPERATURE_SENSOR,INPUT);
  digitalWrite(HEATER, LOW);
  digitalWrite(COOLER, LOW);
}
//read temp from temp sensor and return temp
float read_temperature(void)
{
  // put your main code here, to run repeatedly:
  float temperature;
  temperature=(((analogRead(TEMPERATURE_SENSOR)*(float)5/1024))/(float)0.01);
  return temperature;
}

// to turn on and off cooler
void cooler_control(bool control)
{
  if(control)
  {
    digitalWrite(COOLER,HIGH);
  }
  else
  {
    digitalWrite(COOLER,LOW);
  }
}
void heater_control(bool control)
{
  if(control)
  {
    digitalWrite(HEATER,HIGH);
  }
  else
  {
    digitalWrite(HEATER,LOW);
  }
}
