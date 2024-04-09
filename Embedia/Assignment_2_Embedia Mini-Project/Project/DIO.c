#include "DIO.h"
#include "BIT_MATH.h"
#include "REGISTER.h"

void pinMode(u8 port_pin, PinMode state) {
  u8 port = (port_pin & 0xF0) >> 4;
  u8 pin = port_pin & 0x0F;

  if (state == INPUT) {
    CLR_BIT(*DDR_REG(port), pin);
  }

  else if (state == OUTPUT) {
    SET_BIT(*DDR_REG(port), pin);
  }
}

void digitalWrite(u8 port_pin, u8 state) {
  u8 port = (port_pin & 0xF0) >> 4;
  u8 pin = port_pin & 0x0F;

  if (state == 0) {
    CLR_BIT(*PORT_REG(port), pin);
  }

  else if (state == 1) {
    SET_BIT(*PORT_REG(port), pin);
  }
}

u8 digitalRead(u8 port_pin) {
  u8 port = (port_pin & 0xF0) >> 4;
  u8 pin = port_pin & 0x0F;

  return GET_BIT(*PIN_REG(port), pin);
}

void digitalToggle(u8 port_pin) {
  u8 port = (port_pin & 0xF0) >> 4;
  u8 pin = port_pin & 0x0F;

  TOG_BIT(*PORT_REG(port), pin);
}
