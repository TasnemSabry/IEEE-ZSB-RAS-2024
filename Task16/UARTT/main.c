/*
 * main.c
 *
 *  Created on: Jul 30, 2024
 *      Author: Dell
 */


#include"uart.h"

 int main() {
   uint8_t temp_data;

   DDRA|=(1<<0)|(1<<1);
   uart_init();

   uart_transmit_string("1- LED ON");
   _delay_ms(100);
   uart_transmit(13);
   uart_transmit_string("2- LED OFF");
   uart_transmit(13);
   uart_transmit_string("3- Print \"Embedded systems\"");

   while(1){
     uart_transmit(13);
     temp_data=uart_receive();
     uart_transmit(temp_data);

     if(temp_data=='1'){
       PORTA|=(1<<0)|(1<<1);
     }
     else if(temp_data=='2'){
       PORTA&=~((1<<0)|(1<<1));
     }
     else if(temp_data=='3'){
       uart_transmit(13);
       uart_transmit_string("Embedded systems");
     }
     else{
       uart_transmit(13);
       uart_transmit_string("WROOOOONG!");
     }
     _delay_ms(100);
   }

    return 0;
}
