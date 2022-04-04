/*
 * Exp_18.c
 *
 * Created: 04-04-2022 10:39:15
 *  Author: SSM POLY
 */ 

#include <avr/io.h>
#include <util/delay.h>

#define DATA1 7
#define DATA2 3
#define DATA3 0xff
#define DATA4 0x01
#define DATA5 5
#define DATA6 2



int main(void)

{
 DDRB = 0xff;// make port B output
	   PORTB = DATA1 + DATA2;//Addition
	   _delay_ms(5000);
	   PORTB = DATA3-DATA4;//subtraction
	   _delay_ms(5000);
	   PORTB = DATA5 * DATA6;//multiplication
	   _delay_ms(5000);
    while(1)
    {
       
	   
	   
    }
	return 0;
}

