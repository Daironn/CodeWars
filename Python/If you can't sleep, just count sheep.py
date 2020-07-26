# KATA LINK
# https://www.codewars.com/kata/5b077ebdaf15be5c7f000077
def count_sheep(n):
    sheeps = ""
    for i in range(1, n + 1):
        sheeps += (str(i) + " sheep...")

    return sheeps