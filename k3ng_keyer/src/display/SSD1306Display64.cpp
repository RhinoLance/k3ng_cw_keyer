#include "SSD1306Display64.h"
#include "SSD1306AsciiWire.h"
#include <Wire.h>

SSD1306Display64::SSD1306Display64(TwoWire* wire, int i2cAddress) {
	
	wire->begin();
	wire->setClock(400000L);

	display.begin(&Adafruit128x64, i2cAddress);
};

void SSD1306Display64::initialize() {
	
};

void SSD1306Display64::setBrightness(int brightness) {
	display.setContrast(brightness);
};

void SSD1306Display64::setWpm(int wpm) {
	display.clear();
	display.setCursor(0, 0);
	
	display.setFont(Cooper26);
	display.print(wpm);

	display.setFont(Callibri11);
	display.print(" wpm");
};

void SSD1306Display64::showSplashScreen(const char* title, const char* subText){

	display.clear();
	display.setCursor(0, 0);
	
	display.setFont(Callibri15);
	display.print("HELLO");

	display.setFont(Callibri11);
	display.print("LANCE");
};