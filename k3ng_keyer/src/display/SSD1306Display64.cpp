#include "SSD1306Display64.h"
#include "SSD1306AsciiWire.h"
#include <Wire.h>

const int DISPLAY_WIDTH = 128;
const int DISPLAY_HEIGHT = 64;

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
	
	//int startCol = (DISPLAY_WIDTH - labelWidth - valueWidth) / 2;
	char valBuffer[2];
	itoa(wpm, valBuffer, 10);
	display.setFont(CalLite24);
	int valueWidth = display.strWidth(valBuffer);
	int valCol = (DISPLAY_WIDTH - valueWidth) / 2;
	display.setCursor(valCol, 0);
	display.print(valBuffer);

	char labelBuffer[] = "wpm";
	display.setFont(font5x7);
	int labelWidth = display.strWidth(labelBuffer);
	int labelCol = (DISPLAY_WIDTH - labelWidth) / 2;
	display.setCursor(labelCol, 3);
	display.print(labelBuffer);
};

void SSD1306Display64::showSplashScreen(const char* title, const char* subText, const char* footer) {

	display.clear();
	display.setCursor(0, 0);
	
	display.setFont(Callibri15);
	display.println(title);

	display.setFont(Callibri11);
	display.println(subText);
	
	display.setFont(Callibri10);
	display.println(footer);

};

void SSD1306Display64::hideSplashScreen() {
	display.clear();
};