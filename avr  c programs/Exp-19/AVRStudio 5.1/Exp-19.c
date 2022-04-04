/*
 * Exp_19.c
 *
 * Created: 04-04-2022 11:00:28
 *  Author: SSM POLY
 */ 

#include <avr/io.h>

void delay100ms(void)
{
	unsigned int i;
	for (i=0;i<42150;i++);
	
	
}

int main(void)

{
	DDRB=0xff; // portB is output
    while(1)
    {
       PORTB = 0xaa;
	   delay100ms();
	   PORTB = 0x55;
	   delay100ms();
    }
	return 0;
}