#ifndef SSD1306Display64_H
#define SSD1306Display64_H

#include "SSD1306AsciiWire.h"
#include "IDisplay.h"

class SSD1306Display64: public IDisplay {
	
	private:
		SSD1306AsciiWire display;

	public:
		SSD1306Display64(TwoWire* wire, int i2cAddress);
		void initialize( );
		void setWpm(int wpm);
		void showSplashScreen(const char* title, const char* subText, const char* footer);
		void hideSplashScreen();
		void setBrightness(int brightness);
};

#endif // SSD1306Display64_H