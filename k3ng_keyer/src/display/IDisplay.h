#ifndef IDISPLAY_H
#define IDISPLAY_H

class IDisplay {
	public:
		virtual ~IDisplay() = default;

		virtual void initialize() = 0;
		virtual void setBrightness(int brightness) = 0;
		virtual void setWpm(int wpm) = 0;
		virtual void showSplashScreen(const char* title, const char* subText) = 0;
};

#endif // IDISPLAY_H