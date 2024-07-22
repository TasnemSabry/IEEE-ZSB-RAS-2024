/*
 * Interrupts.h
 *
 *
 * Created on: Jul 22, 2024
 *      Author: Tasnem
 */

#ifndef INTERRUPTS_H_
#define INTERRUPTS_H_
#include<avr/io.h>


void INT0_Init(void){
	MCUCR |= (1<<ISC01) &~(1<<ISC00);
	GICR =(1<<INT0);
	DDRD &= ~(1<<PD2);
	PORTD |=(1<<PD2);
}



void INT1_Init(void){
	MCUCR |=(1<<ISC11) |(1<<ISC10);
	GICR |= (1<<INT1);
	DDRD &= ~(1<<PD3);
}


void INT2_Init(void){
	MCUCSR &=~(1<<ISC2);
	GICR|=(1<<INT2);
	DDRD &= ~(1<<PB2);
	PORTB |=(1<<PB2);
}


#endif /* INTERRUPTS_H_ */
