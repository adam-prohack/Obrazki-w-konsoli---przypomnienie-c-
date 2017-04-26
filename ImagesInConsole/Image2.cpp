#include "stdafx.h"
#include "Image2.h"

void Image2::DrawLine(long length) {
	for (int i = 0; i < length / 2; i++) std::cout << ' ';
	std::cout << '*';
	for (int i = 0; i < length / 2; i++) std::cout << ' ';
	std::cout << std::endl;
}

void Image2::DrawMiddleLine(long length) {
	for (int i = 0; i < length / 4; i++) std::cout << "< ";
	std::cout << '*';
	for (int i = 0; i < length / 4; i++) std::cout << " >";
	std::cout << std::endl;
}

void Image2::Draw()
{
	for (int i = 0; i < width / 2; i++) {
		DrawLine(width * 2 - 1);
	}
	DrawMiddleLine(width * 2 - 1);
	for (int i = 0; i < width / 2; i++) {
		DrawLine(width * 2 - 1);
	}
	std::cout << std::endl;
}
