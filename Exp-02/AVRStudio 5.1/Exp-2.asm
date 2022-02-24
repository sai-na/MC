/*
 * Exp_2.asm
 *
 *  Created: 24-02-2022 05:32:50
 *   Author: SSM POLY
 */ 

.INCLUDE"M32DEF.INC"
	 ldi r16,10
	 ldi r20,0
	 ldi r21,3
AGAIN: add r20,r21
	dec r16
	brne AGAIN
	out portb,r20
L1:
	RJMP L1
