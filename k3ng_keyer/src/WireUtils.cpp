#include "WireUtils.h"
#include <Wire.h>

TwoWire* get_i2c_wire(int bus, int sda, int scl) {

	TwoWire* wire = bus == 0 ? &Wire : &Wire1;

	#if defined(ARDUINO_RASPBERRY_PI_PICO_W) || defined(ARDUINO_RASPBERRY_PI_PICO)
		wire->setSDA(sda);
		wire->setSCL(scl);
	#endif

	return wire;

}