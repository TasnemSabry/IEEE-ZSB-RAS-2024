/*
 * main.c

 *
 *  Created on: Jul 4, 2024
 *      Author: Tasnem
 */

#include <avr/io.h>
#include <util/delay.h>


//switches
#define STOPP PD0
#define GO_FORWARD PD1
#define GO_BACK PD2
#define TURN_LEFT PD3
#define TURN_RIGHT PD4

//motor driver
#define MOTOR1_PIN1 PB0
#define MOTOR1_PIN2 PB1
#define MOTOR2_PIN1 PB2
#define MOTOR2_PIN2 PB3

void setup() {

	DDRD &= ~(1 << STOPP);
    DDRD &= ~(1 << GO_FORWARD);
    DDRD &= ~(1 << GO_BACK);
    DDRD &= ~(1 << TURN_LEFT);
    DDRD &= ~(1 << TURN_RIGHT);

    PORTD |= (1 << STOPP);
    PORTD |= (1 << GO_FORWARD);
    PORTD |= (1 << GO_BACK);
    PORTD |= (1 << TURN_LEFT);
    PORTD |= (1 << TURN_RIGHT);

    DDRB |= (1 << MOTOR1_PIN1);
    DDRB |= (1 << MOTOR1_PIN2);
    DDRB |= (1 << MOTOR2_PIN1);
    DDRB |= (1 << MOTOR2_PIN2);
}

void StopMotors() {
    PORTB &= ~(1 << MOTOR1_PIN1);
    PORTB &= ~(1 << MOTOR1_PIN2);
    PORTB &= ~(1 << MOTOR2_PIN1);
    PORTB &= ~(1 << MOTOR2_PIN2);
}

void GoForward() {
    PORTB |= (1 << MOTOR1_PIN1);
    PORTB &= ~(1 << MOTOR1_PIN2);
    PORTB |= (1 << MOTOR2_PIN1);
    PORTB &= ~(1 << MOTOR2_PIN2);
}

void GoBack() {
    PORTB &= ~(1 << MOTOR1_PIN1);
    PORTB |= (1 << MOTOR1_PIN2);
    PORTB &= ~(1 << MOTOR2_PIN1);
    PORTB |= (1 << MOTOR2_PIN2);
}

void TurnLeft() {
    PORTB &= ~(1 << MOTOR1_PIN1);
    PORTB |= (1 << MOTOR1_PIN2);
    PORTB |= (1 << MOTOR2_PIN1);
    PORTB &= ~(1 << MOTOR2_PIN2);
}

void TurnRight() {
    PORTB |= (1 << MOTOR1_PIN1);
    PORTB &= ~(1 << MOTOR1_PIN2);
    PORTB &= ~(1 << MOTOR2_PIN1);
    PORTB |= (1 << MOTOR2_PIN2);
}

int main(void) {
    setup();

    while (1) {
        if (!(PIND & (1 << STOPP))) {
            StopMotors();
        } else if (!(PIND & (1 << GO_FORWARD))) {
            GoForward();
        } else if (!(PIND & (1 << GO_BACK))) {
            GoBack();
        } else if (!(PIND & (1 << TURN_LEFT))) {
            TurnLeft();
        } else if (!(PIND & (1 << TURN_RIGHT))) {
            TurnRight();
        } else {
            StopMotors();
        }
        _delay_ms(100);
    }
}
