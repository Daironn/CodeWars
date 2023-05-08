#include <iostream>
#include <vector>
#include <numeric> 
int Add(int x, int y);

int main()
{
	std::cout << Add(2,-3);
	system("PAUSE");
}

int Add(int x, int y)
{
	std::vector<int> sum{x};
	return std::accumulate(sum.begin(), sum.end(), y);
}