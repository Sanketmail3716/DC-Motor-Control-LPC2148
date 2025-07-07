#include<lpc21XX.h>           
#define IN1 7
#define IN2 8
#define EN  9
#define sw1  14
#define sw2  15

#define led1 17
#define led2 18

void Delay(unsigned int );          

void main (void)
{ PINSEL0=0x00000000;
	PINSEL1=0x00000000;
	PINSEL2=0x00000000;
	IODIR0|=(1<<IN1)|(1<<IN2)|(1<<led1)|(1<<EN)|(1<<led2);
  IODIR0&=~(1<<sw1);	
	IODIR0&=~(1<<sw2);	
	IOSET0=(1<<EN);
    while(1)                
    {
				if(!(IOPIN0 &(1<<sw1)))
				{
						Delay(30);     
			
					IOCLR0=(1<<IN1); 
          IOSET0=(1<<IN2);			
				  IOSET0=(1<<led1);
					
					IOCLR0=(1<<led2);
					  
				}	
				if(!(IOPIN0 &(1<<sw2)))
				{
					Delay(30); 
				  IOSET0=(1<<IN1);
					IOCLR0=(1<<IN2);
					IOSET0=(1<<led2);
					IOCLR0=(1<<led1);
					  
				
				}
		}
}

void Delay(unsigned int time)
{
    int j;
    int i;
    for(i=0;i<time;i++)
    {
        for(j=0;j<60000;j++)
        {
        }
    }
}