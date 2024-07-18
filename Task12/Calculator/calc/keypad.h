/*
 * keypad.h
 *
 *  Created on: Jul 18, 2024
 *      Author: Dell
 */


#ifndef KEYPAD_H_
#define KEYPAD_H_

#include "controllerconfig.h"
#include "commonmacros.h"
#include "std_types.h"

#define N_col 4
#define N_row 4

#define KEYPAD_PORT_OUT PORTA
#define KEYPAD_PORT_IN  PINA
#define KEYPAD_PORT_DIR DDRA

uint8 KeyPad_getPressedKey(void);


#endif
