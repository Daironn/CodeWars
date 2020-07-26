#include "pch.h"
#include <iostream>
#include <string> 

int findDigit(int num, int nth);

int main()
{
	std::cout << findDigit(567223, 4);
	system("pause");
}

int findDigit(int num, int nth) {

	num = abs(num);
	for (int i(0); i < nth-1; i++) {
			num /= 10;
		}
	return num % 10;

}
