#include<avr/io.h>
#include<util/delay.h>
int flag=0;

void setup() {
  // put your setup code here, to run once:
   DDRB |= 0x10;
   DDRD &= ~0x04;
   EICRA |= 0x03;
   EIMSK |= 0x01;
   sei();
}

void loop() {
   _delay_ms(1000);
}

ISR(INT0_vect)
{ 
  PORTB ^= 0x10;
}

