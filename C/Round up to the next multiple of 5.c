//KATA LINK
//https://www.codewars.com/kata/55d1d6d5955ec6365400006d
#include <stdio.h>

int round_to_next5(int n) {

    while (n % 5 != 0)
      n++;
  return n;

}

int main(void)
{
    printf("%d", round_to_next5(321));
    return 0;
}