#pragma once

class Image5
	:public BaseImage {
private:
	void DrawLine1(long lenght);
	void DrawLine2(long lenght);
public:
	/*
		# # # # #
			*
		# # # # #
			*
		# # # # #
	*/
	virtual void Draw() override;
	Image5(long _width) :BaseImage(_width) {}
};