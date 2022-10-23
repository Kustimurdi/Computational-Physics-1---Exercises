#include "sheet1/sheet1.h"
#include <iostream>

int main() {
	const float e = exp(1);
	float p = 1;
	for (int n = 20; n > 0; n--) {
		p = e - n * p;
		std::cout << p << std::endl;
	}
	return 0;
}