//KATA LINK
//https ://www.codewars.com/kata/54da5a58ea159efa38000836
#include "pch.h"
#include <iostream>
#include <vector>
#include <map>
#include <iterator> 
#include <algorithm>
int findOdd(const std::vector<int>& numbers);

using V = std::vector<int>;

int main() {

	findOdd(V{ 20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5 });
	findOdd(V{ 1,1,2,-2,5,2,4,4,-1,-2,5 });
	findOdd(V{ 20,1,1,2,2,3,3,5,5,4,20,4,5 });
	findOdd(V{ 10 });
	findOdd(V{ 1,1,1,1,1,1,10,1,1,1,1 });

	system("pause");
}
int findOdd(const std::vector<int>& numbers) {

	std::map<int, int> mapa;

	int MAX_Arg = 0;

	for (auto x : numbers) {
		++mapa[x];
	}

	for (auto ite = mapa.cbegin(); ite != mapa.cend(); ++ite) {
		if (ite->second % 2 == 1)
			MAX_Arg = ite->first;
	}

	return MAX_Arg;
}