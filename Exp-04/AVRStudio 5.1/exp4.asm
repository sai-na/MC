/*
 * exp4.asm
 *
 * Aim
 * write a program to 
  
 * (a) load the PORTB register with the value 0x55 and
 * (b) complement PORTB 700 times 

 


 */ 



		LDI R16,0x55
		OUT PORTB,R16
		LDI R20,10

LOP_1:	LDI R21,70
LOP_2:  COM R16
		OUT PORTB,R16
		DEC R21
		BRNE LOP_2
		DEC R20 
		BRNE LOP_1