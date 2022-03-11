/*
 * Exp_07.asm
 *
 *  Created: 11-03-2022 13:54:54
 *   Author: SSM POLY

  write a program to toggle all the bits of i/o register PORT-B every 1s Assume that the crystal frequency is 8 Mhz and the system using An ATmega32
 */ 


 ldi r16, high(ramend)
 out sph,r16
 ldi r16,low(ramend)
 out spl,r16
 ldi r16,0x55   ;load r16 with 0x55
  ldi r17,0xff
 out ddrb,r17
 back: 
	com r16
	out PORTB,r16
 	call delay_1s
	rjmp back
delay_1s:
ldi r20,100
L1: ldi r21,100
L2: ldi r22,100
l3: nop
		nop
		dec r22
		brne L3
		dec r21
		brne L2
		dec r20
		brne l1
		ret




