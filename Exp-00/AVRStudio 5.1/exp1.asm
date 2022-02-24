/*
 * exp1.asm
 *
 *  Created: 24-02-2022 03:30:10
 *   Author: SSM POLY
 */ 


ldi r16,0xff
out ddrb , r16
;---------------------------------
ldi r16,0xff
out portb,r16
l1:
rjmp l1
