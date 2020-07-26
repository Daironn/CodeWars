# KATA LINK
# https://www.codewars.com/kata/55bf01e5a717a0d57e0000ec
import math
def sum_numbers(n):
    sum = 1

    while n > 0:
        sum *= (n % 10)
        print(sum)
        n /=10
        n = math.floor(n)
    return sum

def persistence(n):

    sum = sum_numbers(n)
    count = 0
    while len(str(sum))+1 > 1:
        sum = sum_numbers(sum)
        count+=1;


    return count


print(persistence(25))