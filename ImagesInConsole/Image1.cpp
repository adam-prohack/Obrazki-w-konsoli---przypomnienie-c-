#include "stdafx.h"
#include "Image1.h"

void Image1::DrawLine(std::vector<long> signIndexes, long width) {
	size_t index = 0;
	std::sort(signIndexes.begin(), signIndexes.end());
	for (int i = 0; i < width; i++) {
		if (index < signIndexes.size() && i == signIndexes[index]) {
			std::cout << '*';
			index++;
		}
		else std::cout << ' ';
	}
	std::cout << std::endl;
}

void Image1::Draw()
{
	int plus = 2;
	int start = width - 1;
	int end = width - 1;

	for (int i = 0; i < width; i++) {
		DrawLine(std::vector<long>{start, end}, width * 2 - 1);
		if (start == 0) plus = -2;
		start -= plus;
		end += plus;
	}
	std::cout << std::endl;
}
