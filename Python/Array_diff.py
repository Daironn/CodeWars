# KATA LINK
# https://www.codewars.com/kata/523f5d21c841566fde000009
def array_diff(a, b):
    indeks = 0
    while indeks < len(a):
        for i in range (0, len(b)):
            if(a[indeks] == b[i]):
                a.remove(a[indeks])
                indeks-=1

        indeks+=1
    return a

print(array_diff([1,1,2,1,5,7,3], [1,2,3]))