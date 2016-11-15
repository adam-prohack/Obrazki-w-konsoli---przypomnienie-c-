#pragma once

class Image7
	:public BaseImage {
private:
	void DrawLine(long lenght);
	void DrawLine1(long lenght, char sign);
public:
	/*
		* @ * @ *
			@
			*
			@
		* @ * @ *
	*/
	virtual void Draw() override;
	Image7(long _width) :BaseImage(_width) {}
};