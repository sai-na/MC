/*
 * Exp_17.c
 *
 * Created: 04-04-2022 10:22:43
 *  Author: SSM POLY
 */ 

#include <avr/io.h>
#include <util/delay.h>

#define DATA1 0x35
#define DATA2 0x0f
#define DATA3 0x04
#define DATA4 0x68
#define DATA5 0x54
#define DATA6 0x78



int main(void)

{
 DDRB = 0xff;// make port B output
	   PORTB = DATA1 & DATA2;//ANDing
	   _delay_ms(5000);
	   PORTB = DATA3|DATA4;//ORing
	   _delay_ms(5000);
	   PORTB = DATA5 ^ DATA6;//XORing
	   _delay_ms(5000);
    while(1)
    {
       
	   
	   
    }
	return 0;
}