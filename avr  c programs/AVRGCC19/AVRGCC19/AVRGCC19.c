/*
 * AVRGCC19.c
 *
 * Created: 21/03/2022 04:07:24
 *  Author: ssmpoly
 */ 

#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	DDRB = 0xff;
	PORTB |=(1<<PINB7);
	
    while(1)
    {
		PORTB |= (1<<PINB0);
		_delay_ms(1000);
		PORTB &=~(1<<PINB1);
		_delay_ms(1000);
        //TODO:: Please write your application code 
    }
}