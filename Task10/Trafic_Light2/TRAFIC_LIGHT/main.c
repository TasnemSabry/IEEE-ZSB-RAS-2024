/*
 * main.c

 *
 *  Created on: Jul 1, 2024
 *      Author: Tasnem
 */


#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "STD_TYPES.h"
#include "seven_segment.h"
#include "std_macros.h"

volatile unsigned char counter1 = 0;
volatile unsigned char counter2 = 0;
volatile unsigned char counter3 = 0;

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

void timer_CTC_init_interrupt(void)
{
    TCCR0 |= (1 << WGM01);
    OCR0 = 156;
    TIMSK |= (1 << OCIE0);
    TCCR0 |= (1 << CS02);
}

int main(void)
{
    seven_seg_vinit('D');
    seven_seg_vinit('C');

    SET_BIT(DDRB, 0);
    SET_BIT(DDRB, 1);
    SET_BIT(DDRB, 2);

    timer_CTC_init_interrupt();
    sei();

    while (1)
    {
        if (counter2 < 15)
        {
            SET_BIT(PORTB, 0);
            CLR_BIT(PORTB, 1);
            CLR_BIT(PORTB, 2);
            seven_seg_write('D', (15 - counter2) / 10);
            seven_seg_write('C', (15 - counter2) % 10);
        }
        else if (counter2 < 20)
        {
            CLR_BIT(PORTB, 0);
            CLR_BIT(PORTB, 1);
            SET_BIT(PORTB, 2);
            seven_seg_write('D', (20 - counter2) / 10);
            seven_seg_write('C', (20 - counter2) % 10);
        }
        else if (counter2 < 30)
        {
            CLR_BIT(PORTB, 0);
            SET_BIT(PORTB, 1);
            CLR_BIT(PORTB, 2);
            seven_seg_write('D', (30 - counter2) / 10);
            seven_seg_write('C', (30 - counter2) % 10);
        }
        else
        {
            CLR_BIT(PORTB, 0);
            CLR_BIT(PORTB, 1);
            CLR_BIT(PORTB, 2);
            seven_seg_write('D', 10);
            seven_seg_write('C', 10);
        }

        while (counter3 == 0);
        counter3 = 0;

        counter1++;
        counter2++;
        if (counter2 >= 31)
        {
            counter2 = 0;
        }
    }
}

ISR(TIMER0_COMP_vect)
{
    counter3 = 1;
}
