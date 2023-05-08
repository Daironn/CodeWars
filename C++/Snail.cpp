/*
Snail Sort

Given an n x n array, return the array elements arranged from outermost elements to the middle element, traveling clockwise.

array = [[1,2,3],
         [4,5,6],
         [7,8,9]]
snail(array) #=> [1,2,3,6,9,8,7,4,5]

For better understanding, please follow the numbers of the next array consecutively:

array = [[1,2,3],
         [8,9,4],
         [7,6,5]]
snail(array) #=> [1,2,3,4,5,6,7,8,9]

This image will illustrate things more clearly:

NOTE: The idea is not sort the elements from the lowest value to the highest; the idea is to traverse the 2-d array in a clockwise snailshell pattern.

NOTE 2: The 0x0 (empty matrix) is represented as en empty array inside an array [[]].

*/
#include <vector>
#include <iostream>
int counter = 1;

void fill(const std::vector<std::vector<int>> raw, std::vector<int>& input, int layer)
{

    if(input.size() % 2 == 1 && layer == (raw.size() / 2) )
    {
      input.push_back(raw[layer][layer]);
      std::cout << layer << " " << layer<< "\n";
      return;
    }
  
    for(size_t i = 0; i < raw.size() - layer*2; i++)
    {
            std::cout << layer << " " << i+layer<< "\n";
        input.push_back(raw[layer][i+layer]);
    }

    for(size_t i = 1; i < raw.size() - layer*2; i++)
    {
        input.push_back(raw[i+layer][raw.size()-1-layer]);
    }

    for(int i = raw.size() - 1 - layer; i > 0+layer; i--)
    {
        input.push_back(raw[raw.size()-1-layer][i-1]);
    }

    for(int i = raw.size() - 1 - layer; i > (0+layer)+1; i--)
    {
        input.push_back(raw[i-1][layer]);

    }
}

std::vector<int> snail(const std::vector<std::vector<int>> &snail_map) {

    if(snail_map[0].size() == 0)
        return {};
  
    counter = 1;
    std::vector<int> res;

    if(snail_map.size() > 0)
    {
        if(snail_map.size() % 2 == 0)
        {
          for(size_t i = 0; i < snail_map.size()/2; i++)
          {
              fill(snail_map,res, i);
          }
        }
        else
        {
          for(size_t i = 0; i < (snail_map.size()/2)+1; i++)
          {
              fill(snail_map,res, i);
          }
        }
    }

    return res;
}