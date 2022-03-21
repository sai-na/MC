/*
 * AVRGCC20.c
 *
 * Created: 21/03/2022 04:28:51
 *  Author: ssmpoly
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	unsigned char x;
	unsigned char y;
	unsigned char mybyte = 0x29;
	DDRB = 0xff;
	y = mybyte & 0xf0;
	y = y >> 4;
	PORTB = y | 0x30;
	x = mybyte & 0x0f;
	_delay_ms(1000);
	PORTB = x | 0x30;
	
	
	

	return 0;
  
 }