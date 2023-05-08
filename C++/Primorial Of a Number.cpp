#include "pch.h"
#include <iostream>
#include <vector>
bool isPrime(int number);
unsigned long long numPrimorial(unsigned short int number);

int main()
{
	std::cout << numPrimorial(6);
	system("PAUSE");
}

bool isPrime(int number)
{
	for (int a = 2; a < number; a++) {
		if (number % a == 0) {
			return false;
		}
	}
	return true;
}

unsigned long long numPrimorial(unsigned short int number)
{
	int amount = 0;
	int counter = 2;
	int product = 1;
	std::vector<int> vector;


	while (amount < number) {
		if (isPrime(counter)) {
			vector.push_back(counter);
			amount++;
		}
		counter++;
	}
	for (auto i : vector) {
		product *= i;
	}
	return product;
}