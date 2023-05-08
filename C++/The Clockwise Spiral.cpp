/*
Do you know how to make a spiral? Let's test it!

Classic definition: A spiral is a curve which emanates from a central point, getting progressively farther away as it revolves around the point.

Your objective is to complete a function createSpiral(N) that receives an integer N and returns an NxN two-dimensional array with numbers 1 through NxN represented as a clockwise spiral.

Return an empty array if N < 1 or N is not int / number

Examples:

N = 3 Output: [[1,2,3],[8,9,4],[7,6,5]]

1    2    3    
8    9    4    
7    6    5    

N = 4 Output: [[1,2,3,4],[12,13,14,5],[11,16,15,6],[10,9,8,7]]

1   2   3   4
12  13  14  5
11  16  15  6
10  9   8   7

N = 5 Output: [[1,2,3,4,5],[16,17,18,19,6],[15,24,25,20,7],[14,23,22,21,8],[13,12,11,10,9]]

1   2   3   4   5    
16  17  18  19  6    
15  24  25  20  7    
14  23  22  21  8    
13  12  11  10  9


*/

#include <vector>
#include <iostream>
int counter = 1;

void fill(std::vector<std::vector<int>>& input, int layer)
{

    if(input.size() % 2 == 1 && layer == (input.size() / 2) )
    {
      input[layer][layer] = counter++;  
      return;
    }
  
    for(size_t i = 0; i < input.size() - layer*2; i++)
    {
        input[layer][i+layer] = counter++;
    }

    for(size_t i = 1; i < input.size() - layer*2; i++)
    {
        input[i+layer][input.size()-1-layer] = counter++;
    }

    for(int i = input.size() - 1 - layer; i > 0+layer; i--)
    {
        input[input.size()-1-layer][i-1] = counter++;
    }

    for(int i = input.size() - 1 - layer; i > (0+layer)+1; i--)
    {
        input[i-1][layer] = counter++;

    }
}
std::vector<std::vector<int>> create_spiral(int n)
{
    
    counter = 1;
    std::vector<std::vector<int>> res;

    if(n > 0)
    {
        std::vector<std::vector<int>> test(n, std::vector<int>(n,0));
        if(n % 2 == 0)
        {
          for(int i = 0; i < n/2; i++)
            {
              fill(test, i);
            }
        }
       else
       {
          for(int i = 0; i < (n/2)+1; i++)
          {
              fill(test, i);
          }
       }
      res = test;
    }
    return res;
}