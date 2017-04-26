#include "stdafx.h"
#include "Image6.h"

void Image6::DrawLine1(long lenght) {
	for (int i = 0; i < lenght; i++) {
		if (i % 2 == 0) std::cout << "*";
		else std::cout << " ";
	}
	std::cout << std::endl;
}

void Image6::DrawLine2(long lenght) {
	std::cout << "*";
	for (int i = 0; i < lenght - 2; i++) std::cout << " ";
	std::cout << "*";
	std::cout << std::endl;
}

void Image6::DrawLine3(long lenght) {
	std::cout << "*";
	for (int i = 0; i < (lenght - 2) / 2; i++) std::cout << " ";
	std::cout << "*";
	for (int i = 0; i < (lenght - 2) / 2; i++) std::cout << " ";
	std::cout << "*";
	std::cout << std::endl;
}

void Image6::Draw()
{
	long lenght = width * 2 - 1;
	DrawLine1(lenght);
	for (int i = 0; i < (width - 2) / 2; i++) DrawLine2(lenght);
	DrawLine3(lenght);
	for (int i = 0; i < (width - 2) / 2; i++) DrawLine2(lenght);
	DrawLine1(lenght);
	std::cout << std::endl << std::endl;
}
