/*
 * EXP27C.c
 *
 * Created: 05/04/2022 06:03:23
 *  Author: SSM
 */ 

#include <avr/io.h>
void TODelay();

int main()
{
	DDRB=0xff;
	
    while(1)
    {
		PORTB=0x55;
		TODelay();
		PORTB=0xaa;
		TODelay();
        //TODO:: Please write your application code 
    }
}

void TODelay()
{
	TCNT0 = 0X20;
	TCCR0 = 0X01;
	while((TIFR & 0x1)==0);
	TCCR0 = 0;
	TIFR=0X1;
}