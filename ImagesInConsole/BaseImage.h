#pragma once

class BaseImage {
protected:
	long width = 5;
public:
	virtual void Draw() = 0;

	BaseImage(long _width);
};