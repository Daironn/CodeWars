//KATA LINK
//https://www.codewars.com/kata/52c31f8e6605bcc646000082

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