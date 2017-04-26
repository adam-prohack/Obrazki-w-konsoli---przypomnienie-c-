#include "stdafx.h"
#include "Image3.h"

void Image3::DrawLine(long length, long first, long second) {
	for (int i = 0; i < length; i++) {
		if (i == second) std::cout << '?';
		else if (i == first) std::cout << '*';
		else std::cout << ' ';
	}
	std::cout << std::endl;
}

void Image3::Draw()
{
	long start = 0;
	long end = (width - 1) * 2;
	for (int i = 0; i < width; i++) {
		DrawLine(width * 2 - 1, start, end);
		end -= 2;
		start += 2;
	}
	std::cout << std::endl << std::endl;
}
