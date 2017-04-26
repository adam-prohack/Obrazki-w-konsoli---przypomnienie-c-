#include "stdafx.h"
#include "Image4.h"

void Image4::DrawLine1(long lenght) {
	int a = 0;
	for (int i = 0; i < lenght; i++, a++) {
		if (a == 0 || a == 4) {
			std::cout << "*";
			a = 0;
		}
		else std::cout << " ";
	}
	std::cout << std::endl;
}

void Image4::DrawLine2(long lenght) {
	int a = 0;
	for (int i = 0; i < lenght; i++, a++) {
		if (a == 0 || a == 4) {
			std::cout << "*";
			a = 0;
		}
		else if (a == 2) std::cout << "@";
		else std::cout << " ";
	}
	std::cout << std::endl;
}

void Image4::Draw()
{
	long lenght = width * 2 - 1;
	for (int i = 0; i < width; i++) {
		if (i % 2 == 0) DrawLine1(lenght);
		else DrawLine2(lenght);
	}
	std::cout << std::endl << std::endl;
}
