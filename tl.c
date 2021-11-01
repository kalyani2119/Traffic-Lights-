//Traffic-Lights-
//An embedded C program to design traffic lights using 8051 microcontroller
#include<reg51.h>
sbit red = p1^0;
sbit yellow = p1^1;
sbit green = p1^2;
void main()
{
  unsigned int i;
  red=0;
  yellow=0;
  green=0;
  while(1)
  {
    red = 1;
    for(i=0;i<100000;i++);
    red = 0;
    yellow = 1;
    for(i=0;i<50000:i++);
    yellow = 0;
    green = 1;
    for(i=0;i<100000;i++);
    green = 0;
  }
}
  
