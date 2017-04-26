#pragma once

class Image1
	:public BaseImage {
private:
	void DrawLine(std::vector<long> signIndexes, long width);
public:
	/*
			*
		  *   *
		*       *
		  *   *
			*
	*/
	virtual void Draw() override;
	Image1(long _width) :BaseImage(_width) {}
};