#include "stdafx.h"
#include "Image5.h"

void Image5::DrawLine1(long lenght) {
	for (int i = 0; i < lenght; i++) {
		if (i % 2 == 0) std::cout << "#";
		else std::cout << " ";
	}
	std::cout << std::endl;
}

void Image5::DrawLine2(long lenght) {
	for (int i = 0; i < lenght; i++) {
		if (i == lenght / 2) std::cout << "*";
		else std::cout << " ";
	}
	std::cout << std::endl;
}

void Image5::Draw()
{
	long lenght = width * 2 - 1;
	for (int i = 0; i < width; i++) {
		if (i % 2 == 0) DrawLine1(lenght);
		else DrawLine2(lenght);
	}
	std::cout << std::endl << std::endl;
}
