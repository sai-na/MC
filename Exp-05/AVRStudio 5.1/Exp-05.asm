/*
 * AVRAssembler1.asm
 *
 *  Created: 11-03-2022 11:03:55
 *   Author: SSM POLY
 */ 


	ldi r21,0              ; clear high byte(r21=0)
	ldi r20,0			  ;clear low byte(r21=0)
	ldi r16,0x79
	add r20,r16          ;r20= 0+0x79=0x79  ,, c=0

	brsh n_1 ; if c=0 , add next number
	inc r21 ; c=1 increment(now high byte =0)

n_1 :	ldi r16,0xf5
		add r20,r16
		brsh n_2
		inc r21
		
n_2 :	ldi r16,0xe2
		add r20,r16
		brsh over
		inc r21
over: 