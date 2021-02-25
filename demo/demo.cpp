#include "mbed.h"
  
DigitalOut myLED(LED1);
DigitalOut myLED3(LED3);
  
int Led(DigitalOut &ledpin);
int Led1(DigitalOut &ledpin);
  
int main()
{
  myLED = 1;
  myLED3 = 1;
  while (true)
  {
    Led(myLED);
    Led1(myLED3);
  }
}