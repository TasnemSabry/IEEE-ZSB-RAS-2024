/*
 * main.c

 *
 *  Created on: Jul 1, 2024
 *      Author: Tasnem
 */


#include <util/delay.h>
#include <avr/io.h>
#include "STD_TYPES.h"

int main(void)
{
    DDRC = 0xFF;
    DDRD = 0xFF;
    DDRB = 0xFF;

    u8 SSD_ARR[10] = {
        0b00111111,
        0b00000110,
        0b01011011,
        0b01001111,
        0b01100110,
        0b01101101,
        0b01111101,
        0b00000111,
        0b01111111,
        0b01101111
    };

    while (1)
    {
        PORTB = 0b00000001; // Red
        for (int i = 15; i > 0; i--)
        {
            PORTC = SSD_ARR[i / 10];
            PORTD = SSD_ARR[i % 10];
            _delay_ms(100);
        }

        PORTB = 0b00000010; //Yellow
        for (int i = 5; i > 0; i--)
        {
            PORTC = SSD_ARR[i / 10];
            PORTD = SSD_ARR[i % 10];
            _delay_ms(100);
        }

        PORTB = 0b00000100; //Green
        for (int i = 10; i > 0; i--)
        {
            PORTC = SSD_ARR[i / 10];
            PORTD = SSD_ARR[i % 10];
            _delay_ms(100);
        }
    }
}
