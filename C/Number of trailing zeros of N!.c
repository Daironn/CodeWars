//KATA LINK
//https://www.codewars.com/kata/52f787eb172a8b4ae1000a34
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

long zeros(long n) {
  
  int sum = 0;
  for(int i =1; i< 100; i++)
    sum+=n /pow(5,i);
  return sum;
}

int main(void)
{
    printf("%ld", zeros(25));
    return 0;
}