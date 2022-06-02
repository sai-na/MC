#include <avr/io.h>
#define F_CPU 1000000UL
#include <util/delay.h>
#define RS 0
#define RW 1
#define E  2
void send_a_command (unsigned char command);
void send_a_character(unsigned char character);
int main(void)
{

    DDRA = 0xFF;//DDRA output
    DDRB = 0xFF;//ddrb output
    _delay_ms(50);
	lcd_init();
	lcdprint("SAI");
}
int  lcd_init()
{
	send_a_command(0x01);// sending all clear command
    send_a_command(0x38);// 16*1 line LCD
    send_a_command(0x0E);// screen and cursor ON
	_delay_ms(100);
}
void lcdprint(char * str)
{
	unsigned char i=0;
	while(str[i] !=0 )
	{
		send_a_character(str[i]);
		i++;
		
	}
}
void send_a_command (unsigned char command)
{

    PORTA=command;
    PORTB&= ~(1<<RS);
	PORTB&=~(1<<RW);
    PORTB|= (1<<E);
    _delay_ms(50);
    PORTB&= ~(1<<E);
    PORTA =0;

}


void send_a_character (unsigned char character)
{

    PORTA=character;
    PORTB|= (1<<RS);
	PORTB&=~(1<<RW);
    PORTB|= (1<<E);
    _delay_ms(50);
    PORTB&= ~(1<<E);
    PORTA =0;

}