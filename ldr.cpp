#include "ldr.h"
#include "Arduino.h"
#include "main.h"

void init_ldr(void)
{
   pinMode(GARDEN_LIGHT, OUTPUT);
   //pinMode(LDR_SENSOR,INPUT);
}
void brightness_control(void)
{
  unsigned int adc_val;
  adc_val=analogRead(LDR_SENSOR);
  //scale it and reverse it
  adc_val=255-(adc_val/4);
  //adc_val=map(0,1023,255,0) can also do
  analogWrite(GARDEN_LIGHT,adc_val);
  delay(100);
}
