/*
Write a function that takes an array of numbers (integers for the tests) and a target number. 
It should find two different items in the array that, when added together, give the target value. 
The indices of these items should then be returned in a tuple / list (depending on your language) like so: (index1, index2).

For the purposes of this kata, some tests may have multiple answers; any valid solutions will be accepted.

The input will always be valid (numbers will be an array of length 2 or greater, and all of the items will be numbers; target will always be the sum of two different items from that array).

Based on: http://oj.leetcode.com/problems/two-sum/

two_sum([1, 2, 3], 4) == {0, 2}

*/

#include <stdio.h>
void twoSum(unsigned count, const int numbers[count], int target,
      unsigned *index1, unsigned *index2)
{
// assign to the index1 and index2 pointers

  *index1 = *index2 = 0;

  for(; *index1<count; (*index1)++)
    for(*index2=0; *index2<count; (*index2)++)
      if(numbers[*index1] + numbers[*index2] == target && *index1!=*index2)
        return;
}

int main(void)
{
    const int numbers[] = {1, 2, 3}, expected[] = {0, 2};

    int id1 = 0;
    int id2 = 0;
    twoSum(3, numbers, 4, &id1, &id2);
    if(id1 == *expected && id2 == *(expected+1))
        printf("DONE");
    return 0;
}