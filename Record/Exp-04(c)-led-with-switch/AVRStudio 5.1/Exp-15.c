/*
 * Exp_15.c
 *
 * Created: 04-04-2022 09:48:11
 *  Author: SSM POLY
 */ 

#include <avr/io.h>
#include<util/delay.h>
#define F_CPU 1000000UL



int main(void)
{
	DDRB = 0xFF; // DDRB AS OUTPUT
	DDRD = 0x00; // DDRD as input
	PORTD = 0xff; // activate internal pull-up resistors
    while(1)
    {
        _delay_ms(1000); // calling delay
		PORTB = ~PIND;
    }
}