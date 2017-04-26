#pragma once

class Image3
	:public BaseImage {
private:
	void DrawLine(long length, long first, long second);
public:
	/*
		*       ?
		  *   ?
		    ?
		  ?	  *
		?       *
	*/
	virtual void Draw() override;
	Image3(long _width) :BaseImage(_width) {}
};