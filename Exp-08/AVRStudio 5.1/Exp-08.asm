/*
 * Exp_08.asm
 *
 *  Created: 11-03-2022 14:29:49
 *   Author: SSM POLY
 * To send 1byte of data onto PORTB of ATmega32 there by understanding the operation of PORTB as output write program in Assembly language 

 */ 

 ldi r20,0xff 
out ddrb,r20
ldi r20,0xff 
out portb,r20
ldi r20,0xff
out portb,r16
l1: 
	rjmp l1

