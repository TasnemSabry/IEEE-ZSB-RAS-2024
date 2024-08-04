/*
 * SPI_interface.h

 *
 *  Created on: Aug 4, 2024
 *      Author: TAS
 */

#ifndef INC_SPI_INTERFACE_H_
#define INC_SPI_INTERFACE_H_


#include <stdint.h>

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ATMEGA32_REG.h"

#include "DIO_interface.h"


typedef enum {
	master,
	slave
}SPI_mode_t;

#define SS 		DIO_PIN4
#define MOSI 	DIO_PIN5
#define MISO 	DIO_PIN6
#define SCK 	DIO_PIN7



void MCAL_SPI_init(SPI_mode_t device);
void MCAL_SPI_Transmit(uint8_t *data , SPI_mode_t device);

#endif
