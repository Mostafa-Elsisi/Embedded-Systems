#ifndef DIO_H_
#define DIO_H_

#include "STD_TYPES.h"

typedef enum {
    INPUT = 0,
    OUTPUT = 1
} PinMode;



void pinMode(u8 port_pin, PinMode state);
void digitalWrite(u8 port_pin, u8 state);
u8   digitalRead(u8 port_pin);
void digitalToggle(u8 port_pin);

#endif /* DIO_H_ */
