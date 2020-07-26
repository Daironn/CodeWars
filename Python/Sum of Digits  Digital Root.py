# KATA LINK
# https://www.codewars.com/kata/541c8630095125aba6000c00

import math
def sum_numbers(n):
    sum = 0

    while n > 0:
        sum += (n % 10)
        n /=10
        n = math.floor(n)
    return sum

def digital_root(n):

    sum = sum_numbers(n)
    print (sum)
    while len(str(sum)) > 1:
        sum = sum_numbers(sum)


    return sum


print(digital_root(942))