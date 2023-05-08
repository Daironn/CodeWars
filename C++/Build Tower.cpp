/*
Build Tower

Build a pyramid-shaped tower, as an array/list of strings, given a positive integer number of floors. A tower block is represented with "*" character.

For example, a tower with 3 floors looks like this:

[
  "  *  ",
  " *** ", 
  "*****"
]

And a tower with 6 floors looks like this:

[
  "     *     ", 
  "    ***    ", 
  "   *****   ", 
  "  *******  ", 
  " ********* ", 
  "***********"
]

*/

#include <iostream>
#include <vector>
#include <string>
std::vector<std::string> towerBuilder(int nFloors);

int main()
{
	std::vector<std::string> tower = towerBuilder(15);

	for (auto floor : tower)
		std::cout << floor<<std::endl;

	system("PAUSE");
}
std::vector<std::string> towerBuilder(int nFloors){

	int rowCounter(1);
	int spaces = nFloors;

	std::vector<std::string> towerBody;

	for (int i(0); i < nFloors - 1; i++) {

		std::string rowSlice(spaces - (i + 1), ' ');
		std::string centerSide(rowCounter, '*');

		rowSlice += centerSide;

		std::string rightSide(spaces - (i + 1), ' ');

		rowSlice += rightSide;

		rowCounter += 2;

		towerBody.push_back(rowSlice);
	}
	if (rowCounter != 1) {

		std::string rowSlice(rowCounter, '*');
		towerBody.push_back(rowSlice);
	}
	else if (rowCounter == 1) {
		std::string rowSlice(rowCounter, '*');
		towerBody.push_back(rowSlice);
	}
	return std::vector<std::string>(towerBody);
}