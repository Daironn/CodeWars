/*
Write a program that will calculate the number of trailing zeros in a factorial of a given number.

N! = 1 * 2 * 3 *  ... * N

Be careful 1000! has 2568 digits...

For more info, see: http://mathworld.wolfram.com/Factorial.html
Examples

zeros(6) = 1
# 6! = 1 * 2 * 3 * 4 * 5 * 6 = 720 --> 1 trailing zero

zeros(12) = 2
# 12! = 479001600 --> 2 trailing zeros

Hint: You're not meant to calculate the factorial. Find another way to find the number of zeros.

*/
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