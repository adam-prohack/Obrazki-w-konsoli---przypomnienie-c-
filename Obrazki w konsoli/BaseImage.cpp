#include "stdafx.h"

class BaseImage {
protected:
	long width = 5;
	std::vector<char> signs = { ' ', '*', '@' };
public:
	virtual void Draw() = 0;

	BaseImage(long _width) {
		if (_width % 2 == 1 && _width >= 3) width = _width;
		else throw std::exception("Width must be odd and bigger than 2");
	}
};