/*
 * Exp_28.asm
 *
 *  Created: 06-04-2022 10:09:13
 *   Author: SSM POLY
 */ 


 .include"m32def.inc"

// .macro initstack
 ldi r16,0x08  ; pB # as an output
 sbi ddrb,3
 ldi  r17,0

begin: 
	out portb , r17
	rcall delay
	eor r17,r16 ; toggle D3 of r17
	rjmp begin
	; ... Timer 0 delay
	
delay : 
		ldi r20,0
		out tcnt0, r20
		ldi r20,9
		out ocr0 , r20 ; load ocro
		out tccr0 , r20
	
again :
	 in r20, tifr ; read tifr
	 sbrs r20, ocf0 ;if ocfo is set skip next instruction 
	 rjmp again
	 ldi r20,0x00
	 out tccr0, r20 ; stop timer0
	 ldi r20, 1<<ocf0
	 out tifr, r20 ; clar ocfo flag
	 ret
