/*
 * Exp_20.c
 *
 * Created: 04-04-2022 11:17:22
 *  Author: SSM POLY
 */ 
//#define F_CPU 8000000ul


#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	void delay_ms(int d) // delay in d micro seconds // error occuer 
	{
		
		 int i;
    for (i = 0; i < d; i++) {
        _delay_ms(1);
    }
	}
	DDRB = 0xff; // Port bis output
    while(1)
    {
       PORTB = 0x00;
	   _delay_ms(10);
	   PORTB = 0xff;
	   _delay_ms(10);
	   
    }
	return 0;
}