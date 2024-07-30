/*
 * PWM.c

 *
 * Created on: Jul 30, 2024
 *      Author: Tasnem
 */


#include "PWM.h"
void PWM_init_timer1_oc1a(){
	SETBIT(DDRD,5);
	TCCR1A |= (1<<COM1A1)|(1<<WGM10)|(1<<WGM11);
	TCCR1B=(1<<WGM12)|(1<<CS10);
	
	
}
void set_duty_oc1a(uint16_t duty){
OCR1A=10.23*duty;
}
void PWM_init_timer1_oc1b(){
	SETBIT(DDRD,4);
	TCCR1A |= (1<<COM1B1)|(1<<WGM10)|(1<<WGM11);
	TCCR1B=(1<<WGM12)|(1<<CS10);	
}
void set_duty_oc1b(uint16_t duty){
	OCR1B=10.23*duty;
}
