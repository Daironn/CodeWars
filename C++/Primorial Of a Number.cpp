/*
Definition (Primorial Of a Number)

Is similar to factorial of a number, In primorial, not all the natural numbers get multiplied, only prime numbers are multiplied to calculate the primorial of a number. It's denoted with P# and it is the product of the first n prime numbers.
Task

Given a number N , calculate its primorial. !alt !alt
Notes

    Only positive numbers will be passed (N > 0) .

Input >> Output Examples:

1- numPrimorial (3) ==> return (30)

Explanation:

Since the passed number is (3) ,Then the primorial should obtained by multiplying 2 * 3 * 5 = 30 .
Mathematically written as , P3# = 30 .

2- numPrimorial (5) ==> return (2310)

Explanation:

Since the passed number is (5) ,Then the primorial should obtained by multiplying  2 * 3 * 5 * 7 * 11 = 2310 .
Mathematically written as , P5# = 2310 .

3- numPrimorial (6) ==> return (30030)

Explanation:

Since the passed number is (6) ,Then the primorial should obtained by multiplying  2 * 3 * 5 * 7 * 11 * 13 = 30030 .
Mathematically written as , P6# = 30030 .
*/

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