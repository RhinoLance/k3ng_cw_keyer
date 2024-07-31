#ifndef WIREUTILS_H
#define WIREUTILS_H

#include <Wire.h>

TwoWire* get_i2c_wire(int bus, int sda, int scl);

#endif // WIREUTILS_H