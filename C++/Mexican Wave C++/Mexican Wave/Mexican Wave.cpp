#include "pch.h"
#include <string>
#include <iostream>
#include <vector>
std::vector<std::string> wave(std::string y);
int main()
{
	wave("hello");
	wave("codewars");
	wave("");
	wave("two words");
	wave(" gap ");
	system("pause");
}

std::vector<std::string> wave(std::string y) {

	std::vector<std::string> output;

	for (int i = 0; i < y.size(); ++i) {
		

		if (y[i] != ' ') {
			y[i] = toupper(y[i]);
			output.push_back(y);
			y[i] = tolower(y[i]);
		}
		else
			continue;
			
		

	}
	for(int i(0); i <output.size(); i++){
			std::cout << output[i] << std::endl;
	}
	return output;
}
