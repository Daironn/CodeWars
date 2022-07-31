//KATA LINK
//https://www.codewars.com/kata/564057bc348c7200bd0000ff
#include <stdio.h>
#include <math.h>

long long thirt(long long n)
{
    int previous = 0;
    int sum = 0;

    do
    {

      previous = sum;
      sum = 0;
      int i = 0;
      while(n > 0)
      {
        sum += (n % 10) * ((unsigned long long)pow(10,i++) % 13);
        n /=10;
      }
      n = sum;
    }while(sum != previous);
  return sum;
}

int main(void)
{
    printf("%lld", thirt(321));
    return 0;
}