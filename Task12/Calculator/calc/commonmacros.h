/*
 * commonmacros.h
 *
 *  Created on: Jul 18, 2024
 *      Author: Dell
 */


#ifndef COMMONMACROS_H_
#define COMMONMACROS_H_

#define SET_BIT(REG,BIT) (REG|=(1<<BIT))


#define CLEAR_BIT(REG,BIT) (REG&=(~(1<<BIT)))

#define TOGGLE_BIT(REG,BIT) (REG^=(1<<BIT))

#define ROR(REG,num) ( REG= (REG>>num) | (REG<<(8-num)) )

#define ROL(REG,num) ( REG= (REG<<num) | (REG>>(8-num)) )

#define BIT_IS_SET(REG,BIT) ( REG & (1<<BIT) )

#define BIT_IS_CLEAR(REG,BIT) ( !(REG & (1<<BIT)) )

#endif /* COMMONMACROS_H_ */
