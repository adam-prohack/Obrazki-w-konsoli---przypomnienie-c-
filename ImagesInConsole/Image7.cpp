#include "stdafx.h"
#include "Image7.h"

void Image7::DrawLine(long lenght) {
	int a = 0;
	for (int i = 0; i < lenght; i++, a++) {
		if (a == 0 || a == 4) std::cout << "*";
		else if (a == 1 || a == 3) std::cout << " ";
		else if (a == 2) std::cout << "@";
		if (a == 3) a = -1;
	}
	std::cout << std::endl;
}

void Image7::DrawLine1(long lenght, char sign) {
	for (int i = 0; i < lenght / 2; i++) std::cout << " ";
	std::cout << sign;
	for (int i = 0; i < lenght / 2; i++) std::cout << " ";
	std::cout << std::endl;
}

void Image7::Draw()
{
	long lenght = width * 2 - 1;
	DrawLine(lenght);
	for (int i = 0; i < width - 2; i++) {
		if (i % 2 == 0) DrawLine1(lenght, '@');
		else DrawLine1(lenght, '*');
	}
	DrawLine(lenght);
	std::cout << std::endl << std::endl;
}
