/*
 * Exp_03.asm
 *
 *  Created: 24-02-2022 06:26:01
 *   Author: SSM POLY
 */ 

 /*
 * AVRAssembler1.asm
 *
 *  Created: 24-02-2022 06:01:03
 *   Author: Sai nath
 */ 


 .INCLUDE"M32DEF.INC"


 ;-------------Initializing The Stack Pointer-----------------
	 ldi r16,HIGH(RAMEND)  ; load high byte of RAMEND into r16
	 out sph,r16   ; store r16 in stack pointer high
	 ldi r16,LOW(RAMEND)		; load low byte of RAMEND into r16 
	 out spl,r16  ; store r16 in stack pointer low

	 ldi r16,0xff
	 out ddrb,r16
	 out ddrc,r16
	 out ddrd,r16

	 ldi r16,0x55

l3:	
	out portb,r16
	out portc,r16
	out portd,r16

	call QDELAY
	com r16
	rjmp L3


QDELAY :
	 ldi r21,200
D1: ldi r22,250
D2: nop
	nop
	dec r22
	brne D2
	dec r21
	brne D1
	RET


