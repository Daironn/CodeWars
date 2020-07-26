# KATA LINK
# https://www.codewars.com/kata/59c633e7dcc4053512000073

def solve(s):
    indeks = 0
    my_list = []
    my_list.append(0)
    for i in s:
        if i == 'a' or i =='e' or i=='i' or i=='o' or i == 'u':
            my_list.append(0)
            indeks+=1
        else:
            my_list[indeks] +=(ord(i)-96)
    return max(my_list)