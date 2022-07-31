//KATA LINK
//https://www.codewars.com/kata/5544c7a5cb454edb3c000047

#include "pch.h"
#include <iostream>

int bouncingBall(double h, double bounce, double window);

int main()
{
    std::cout << bouncingBall(3,0.66,1.5); //RESULT SHOULD BE 3
	system("PAUSE");
}

int bouncingBall(double h, double bounce, double window) {
	short int amount(1);
	if (h > 0) {

		if (bounce > 0 && bounce < 1) {

			if (window < h) {

				while (h > window) {

					h *= bounce;

					if (h > window) {

						amount += 2;
					}
				}
			}
			else return -1;
		}
		else return -1;
	}
	else return -1;

	return amount;
}