#include "stdafx.h"
#include "BaseImage.h"


BaseImage::BaseImage(long _width)
{
	if (_width % 2 == 1 && _width >= 3) width = _width;
	else throw std::exception("Width must be odd and bigger than 2");
}