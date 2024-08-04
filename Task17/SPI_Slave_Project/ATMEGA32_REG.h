 /*
 * ATMEGA32_REG.h

 *
 *  Created on: Aug 4, 2024
 *      Author: TAS
 */

#ifndef ATMEGA32_REG_H_
#define ATMEGA32_REG_H_

#include <stdint.h>


#define DDRA  (*(volatile uint8_t*)0x3A)
#define DDRB  (*(volatile uint8_t*)0x37)
#define DDRC  (*(volatile uint8_t*)0x34)
#define DDRD  (*(volatile uint8_t*)0x31)


#define PORTA  (*(volatile uint8_t*)0x3B)
#define PORTB  (*(volatile uint8_t*)0x38)
#define PORTC  (*(volatile uint8_t*)0x35)
#define PORTD  (*(volatile uint8_t*)0x32)


#define PINA  (*(volatile uint8_t*)0x39)
#define PINB  (*(volatile uint8_t*)0x36)
#define PINC  (*(volatile uint8_t*)0x33)
#define PIND  (*(volatile uint8_t*)0x30)


# define MCUCR   (*(volatile uint8_t* ) 0x55 )

# define MCUCSR  (*(volatile uint8_t* ) 0x54 )

# define GICR    (*(volatile uint8_t* ) 0x5B )

# define GIFR    (*(volatile uint8_t* ) 0x5A )

# define SREG    (*(volatile uint8_t* ) 0x5F )

#define  ADMUX   (*(volatile uint8_t* ) 0x27 )

#define  ADCSRA   (*(volatile uint8_t* ) 0x26 )

#define  ADCL     (*(volatile uint8_t* ) 0x24 )
#define  ADCH     (*(volatile uint8_t* ) 0x25 )
#define  ADC_U16   (*(volatile uint16_t*) 0x24 )

#define  SFIOR    (*(volatile uint8_t* ) 0x50 )





#define  TCCR0     (*(volatile uint8_t* ) 0x53 )

#define  TCNT0     (*(volatile uint8_t* ) 0x52 )

#define  OCR0      (*(volatile uint8_t* ) 0x5C )

#define  TIMSK     (*(volatile uint8_t* ) 0x59 )

#define  TIFR      (*(volatile uint8_t* ) 0x58 )


#define  TCCR1A     (*(volatile uint8_t* ) 0x4F )

#define  TCCR1B    (*(volatile uint8_t* ) 0x4E )

#define  TCNT1L     (*(volatile uint8_t* ) 0x4C )
#define  TCNT1H     (*(volatile uint8_t* ) 0x4D )
#define  TCNT1_U16  (*(volatile uint16_t*) 0x4C )

#define  OCR1AL     (*(volatile uint8_t* ) 0x4A )
#define  OCR1AH     (*(volatile uint8_t* ) 0x4B )
#define  OCR1A_U16  (*(volatile uint16_t*) 0x4A )

#define  OCR1BL     	  (*(volatile uint8_t* ) 0x48 )
#define  OCR1BH    		  (*(volatile uint8_t* ) 0x49 )
#define  OCR1B_U16   	  (*(volatile uint16_t*) 0x48 )

#define  ICR1L     (*(volatile uint8_t* ) 0x46 )
#define  ICR1H     (*(volatile uint8_t* ) 0x47 )
#define  ICR1_U16  (*(volatile uint16_t*) 0x46 )


#define  WDTCR     (*(volatile uint8_t* ) 0x41 )



# define UDR   (*(volatile uint8_t* ) 0x2C )

# define UCSRA  (*(volatile uint8_t* ) 0x2B )

# define UCSRB    (*(volatile uint8_t* ) 0x2A )

# define UCSRC    (*(volatile uint8_t* ) 0x40 )

# define UBRRL    (*(volatile uint8_t* ) 0x29 )
# define UBRRH    (*(volatile uint8_t* ) 0x40 )

/* SPI REGISTERS */


# define SPDR    (*(volatile uint8_t* ) 0x2F )
# define SPSR    (*(volatile uint8_t* ) 0x2E )
# define SPCR    (*(volatile uint8_t* ) 0x2D )

#define GI_Enable			(SREG|= (1<<7))
#define GI_Disable 			(SREG&= ~(1<<7))
#endif /* ATMEGA32_REG_H_ */
