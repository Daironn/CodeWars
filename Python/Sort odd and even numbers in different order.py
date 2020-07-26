# KATA LINK
# https://www.codewars.com/kata/5a1cb5406975987dd9000028


def sort_array(a):
    oddPositions = []
    oddOnes = []

    evenPositions = []
    evenOnes = []

    for i in range(0, len(a)):
        if a[i] % 2 == 1:
            oddPositions.append(i)
            oddOnes.append(a[i])
    oddOnes.sort()

    for i in range(0, len(a)):
        if a[i] % 2 == 0:
            evenPositions.append(i)
            evenOnes.append(a[i])
    evenOnes.sort(reverse=True)

    for i in range(0, len(oddOnes)):
        a[oddPositions[i]] = oddOnes[i]
    for i in range(0, len(evenPositions)):
        a[evenPositions[i]] = evenOnes[i]
    return a

array = sort_array([2,2,2,22,37,11,4,1,5,0])
print(array)