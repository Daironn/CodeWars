//KATA LINK
//https://www.codewars.com/kata/5502c9e7b3216ec63c0001aa
#include <stdio.h>
#include <stddef.h>

enum membership {OPEN = 1, SENIOR}
output[] = {OPEN, OPEN, SENIOR, OPEN, OPEN, SENIOR};

void open_or_senior (size_t n, const int members[n][2], enum membership memberships[n])
{
// write to the memberships[] array  
  for(size_t i = 0; i < n; i++){
    if(members[i][0] >= 55 && members[i][1] > 7) 
      memberships[i] = SENIOR;
    else memberships[i] = OPEN;
  }
}

int main(void)
{
    const int n = 6;
    
    int input[][2] = {{18, 20}, {45, 2}, {61, 12}, {37, 6}, {21, 21}, {78, 9}};
    int arr[n];
    open_or_senior(n, input, (enum membership *)arr);

    for (size_t i = 0; i < n; i++)
    {
        if(*(arr+i) != *(output+i))
        {
            printf("WRONG!");
            return 1;
        }
    }
    
    return 0;
}