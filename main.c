/*
 * GccApplication4.c
 *
 * Created: 13-05-2019 10:45:10
 * Author : G J S S BHANU
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif                                                                                         
#include <avr/io.h>
#define LED_OUTPUT PORTB
#define PIR_Input PINC

int main(void)
{
    DDRC=0X00;/*Set the PIR port as input port*/
	DDRB=0XFF;/*Set the LED port as output port*/
    while (1) 
    {
		LED_OUTPUT=PIR_Input;//When sensor detected led will be HIGH
    }
}

