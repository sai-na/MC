/*
 * AVRGCC21.c
 *
 * Created: 21/03/2022 04:39:58
 *  Author: ssmpoly
 */ 

#include <avr/io.h>

int main(void)
{
	unsigned char bcdbyte;
	unsigned char w = '4';
	unsigned char z = '7';
	DDRB = 0xff;
	w = w & 0xff;
	w = w<<4;
	z = z & 0x0f;
	bcdbyte = w |z;
	PORTB = bcdbyte;
    return 0;
}