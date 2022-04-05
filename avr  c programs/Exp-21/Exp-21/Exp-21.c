/*
 * _21.c
 *
 * Created: 04-04-2022 13:38:32
 *  Author: SSM POLY
 */ 

#include <avr/io.h>
#include <util/delay.h>
#define serPin 3


int main(void)
{
	
	unsigned char conbyte = 0x44;
	
	unsigned char regALSB;
	
	unsigned char x;
	
	regALSB = conbyte;
	
	//DDRC |= (1<< serPin);
	DDRC =0xff;
	
	for (x=0;x<8;x++)
	{
		if(regALSB & 0x01){
			PORTC |= (1<<serPin);
		}			
		else{
			
			PORTC &= ~(1<<serPin);
		}			
			
		regALSB = regALSB>>1;
		_delay_ms(1000);
	}		
	return 0;
	
    
}