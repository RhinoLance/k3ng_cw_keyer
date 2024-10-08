#ifndef IDISPLAY_H
#define IDISPLAY_H

class IDisplay {
	public:
		virtual ~IDisplay() = default;

		virtual void initialize() = 0;
		virtual void setBrightness(int brightness) = 0;
		virtual void setWpm(int wpm) = 0;
		virtual void showSplashScreen(const char* title, const char* subText, const char* footer) = 0;
		virtual void hideSplashScreen() = 0;

		virtual void on() = 0;
		virtual void off() = 0;
};

#endif // IDISPLAY_H