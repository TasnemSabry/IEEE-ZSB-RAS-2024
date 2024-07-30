/*
 * ADC.c

 *
 * Created on: Jul 30, 2024
 *      Author: Tasnem
 */ 

#include "ADC.h"

void ADC_init(){
	SETBIT(ADMUX,REFS0);
	SETBIT(ADCSRA,ADEN);
	SETBIT(ADCSRA,ADPS0);
	SETBIT(ADCSRA,ADPS1);
	SETBIT(ADCSRA,ADPS2);	
}

uint16_t ADC_read(){

	SETBIT(ADCSRA,ADSC); //conversion
	while(GETBIT(ADCSRA,ADSC) == 1){}
	return ADC;
}
