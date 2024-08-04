/*
 * SPI_Programme.c

 *
 *  Created on: Aug 4, 2024
 *      Author: TAS
 */


#include"SPI_interface.h"


void MCAL_SPI_init(SPI_mode_t device)
{
	if(device == master)
	{
		DIO_SetPinDirection(DIO_PORTB, MOSI, DIO_PIN_OUTPUT);
		DIO_SetPinDirection(DIO_PORTB, SCK , DIO_PIN_OUTPUT);
		DIO_SetPinDirection(DIO_PORTB, SS  , DIO_PIN_OUTPUT);
		DIO_SetPinDirection(DIO_PORTB, MISO, DIO_PIN_INPUT );

		SPCR |= (1<<6)|(1<<4)|(1<<0);

	}
	else if (device == slave)
	{
		DIO_SetPinDirection(DIO_PORTB, MOSI, DIO_PIN_INPUT );
		DIO_SetPinDirection(DIO_PORTB, SCK , DIO_PIN_INPUT );
		DIO_SetPinDirection(DIO_PORTB, SS  , DIO_PIN_INPUT );
		DIO_SetPinDirection(DIO_PORTB, MISO, DIO_PIN_OUTPUT);

		SPCR |= (1<<6);

	}
}
void MCAL_SPI_Transmit(uint8_t *data , SPI_mode_t device)
{
	if(device == master)
	{
		/* Start transmission */
		SPDR = *data;
		while(!(SPSR & (1<<7)));
	}
	else if (device == slave)
	{
		while(!(SPSR & (1<<7)))
		;
		*data = SPDR ;

	}
}
