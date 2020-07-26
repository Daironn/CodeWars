# KATA LINK
# https://www.codewars.com/kata/5b180e9fedaa564a7000009a

def solve(s):
    upper = 0
    lower = 0

    for letter in s:
        if letter.isupper():
            upper+=1
        else:
            lower+=1

    if upper > lower:
        return s.upper()
    elif upper == lower or lower > upper:
        return s.lower()