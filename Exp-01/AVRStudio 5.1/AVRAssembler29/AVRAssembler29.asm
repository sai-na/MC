/*
 * AVRAssembler29.asm
 *
 *  Created: 24-02-2022 04:25:06
 *   Author: SSM POLY
 */ 
    ldi r20,0xff
	out ddrb , r20
	ldi r20,0x55
	out portb,r20
 l1: com r20
 out portb,r20
 jmp l1