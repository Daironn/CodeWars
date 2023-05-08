/*
Given an array of integers, find the one that appears an odd number of times.

There will always be only one integer that appears an odd number of times.
Examples

[7] should return 7, because it occurs 1 time (which is odd).
[0] should return 0, because it occurs 1 time (which is odd).
[1,1,2] should return 2, because it occurs 1 time (which is odd).
[0,1,0,1,0] should return 0, because it occurs 3 times (which is odd).
[1,2,2,3,3,3,4,3,3,3,2,2,1] should return 4, because it appears 1 time (which is odd).

*/

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