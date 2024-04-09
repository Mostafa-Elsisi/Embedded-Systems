#ifndef REGISTER_H
#define REGISTER_H


                /*  Registers */


#define DDRA_Register 		((volatile u8*)0x3A)
#define DDRB_Register		((volatile u8*)0x37)
#define DDRC_Register		((volatile u8*)0x34)
#define DDRD_Register		((volatile u8*)0x31)

#define PORTA_Register		((volatile u8*)0x3B)
#define PORTB_Register		((volatile u8*)0x38)
#define PORTC_Register		((volatile u8*)0x35)
#define PORTD_Register		((volatile u8*)0x32)



#define PINA_REG            ((volatile u8*)0x39)
#define PINB_REG            ((volatile u8*)0x36)
#define PINC_REG            ((volatile u8*)0x33)
#define PIND_REG            ((volatile u8*)0x30)



#define DDR_REG(port)  ((port == 0) ? DDRA_Register :  (port == 1) ? DDRB_Register  : (port == 2) ? DDRC_Register  : DDRD_Register)
#define PORT_REG(port) ((port == 0) ? PORTA_Register : (port == 1) ? PORTB_Register : (port == 2) ? PORTC_Register : PORTD_Register)
#define PIN_REG(port)  ((port == 0) ? PINA_REG : (port == 1) ? PINB_REG : (port == 2) ? PINC_REG : PIND_REG)



#endif /* REGISTER_H_ */
