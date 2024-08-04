/*
 * main.c

 *
 *  Created on: Aug 4, 2024
 *      Author: TAS
 */

#include <util/delay.h>
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ATMEGA32_REG.h"
#include "DIO_interface.h"
#include"SPI_interface.h"

int main(void)
{
	uint8_t ch ;
	DIO_SetPortDirection(DIO_PORTA, DIO_Port_OUTPUT);

	MCAL_SPI_init(slave);

	while(1)
	{
			MCAL_SPI_Transmit(&ch, slave);
			DIO_SetPortValue(DIO_PORTA, ch);
	}
}
