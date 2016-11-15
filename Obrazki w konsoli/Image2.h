#pragma once

class Image2
	:public BaseImage {
private:
	void DrawLine(long length);
	void DrawMiddleLine(long length);
public:
	/*
			*
			*
		< < * > >
			*
			*
	*/
	virtual void Draw() override;
	Image2(long _width) :BaseImage(_width) {}
};