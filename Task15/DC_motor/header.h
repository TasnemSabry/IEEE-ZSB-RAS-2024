/*
 * header.h

 *
 * Created on: Jul 30, 2024
 *      Author: Tasnem
 */ 


#ifndef HEADER_H_
#define HEADER_H_
#include <avr/interrupt.h>
#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>
#define SETBIT(REG,BIT) (REG |= (1<<BIT))
#define CLRBIT(REG,BIT) (REG &=~(1<<BIT))
#define TOGBIT(REG,BIT) (REG ^=(1<<BIT))
#define GETBIT(REG,BIT) ((REG>>BIT)&1)
uint32_t result_func(uint8_t*);

#endif /* HEADER_H_ */
