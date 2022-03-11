/*
 * Exp_06.asm
 *
 *  Created: 11-03-2022 13:14:14
 *   Author: SSM POLY
 Toggle all the bits of PORTB by sending to it the values $55 and $AA continuously .Put a time delay between each issuing of data of PORTB 
 */ 

 ldi r17,0xff
 out ddrb,r17
 ldi r16,high(ramend) ;load sph
 out sph,r16
 ldi r16,low(ramend) ;load spl
 out spl,r16


 back:
    ldi r16,0x55
	out portb,r16
	call delay
	ldi r16,0xaa
	out portb,r16
	call delay
	rjmp back

delay: ldi r20,0xff
again: nop
		nop
		dec r20
		brne again
		ret