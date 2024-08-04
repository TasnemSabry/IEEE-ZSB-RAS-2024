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

	MCAL_SPI_init(master);

	while(1)
	{
		for (ch = 0; ch <= 9; ch++)
		{
			_delay_ms(1000);
			MCAL_SPI_Transmit(&ch, master);
			if(ch == 9) ch = 0 ;

		}
	}
}
