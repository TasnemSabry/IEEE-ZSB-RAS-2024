/*
 * Timer.h

 *
 *  Created on: Jul 22, 2024
 *      Author: Tasnem
 */

#ifndef TIMER_H_
#define TIMER_H_
#include <avr/io.h>


void Timer1_OP(void){
	TCCR1A = (1<<FOC1A);
	TCCR1B=(1<<WGM12) |(1<<CS12)|(1<<CS10) ;
	TCNT1 = 0;
	OCR1A = 977;
	TIMSK|=(1<<OCIE1A);
}


#endif /* TIMER_H_ */
