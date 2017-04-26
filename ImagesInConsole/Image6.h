#pragma once

class Image6
	:public BaseImage {
private:
	void DrawLine1(long lenght);
	void DrawLine2(long lenght);
	void DrawLine3(long lenght);
public:
	/*
		* * * * *
		*       *
		*   *   *
		*       *
		* * * * *
	*/
	virtual void Draw() override;
	Image6(long _width) :BaseImage(_width) {}
};