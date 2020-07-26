# KATA LINK
# https://www.codewars.com/kata/55c04b4cc56a697bb0000048
def scramble(s1,s2):

    dictionary = {}
    dictionary2 = {}

    for i in range (0, len(s2)):
        if s2[i] in dictionary:
            dictionary[s2[i]]+=1
        else:
            dictionary[s2[i]] = 1

    for i in range(0, len(s1)):
        if s1[i] in dictionary2:
            dictionary2[s1[i]] += 1
        else:
            dictionary2[s1[i]] = 1

    for key in dictionary:
        for key2 in dictionary2:
            if key == key2:
                 dictionary[key] -= dictionary2[key2]
    for key in dictionary:

        if dictionary[key] <= 0:
            pass
        else:
            return False


    return True

# print(scramble('scriptjavx', 'javascript')) #FALSE
# print(scramble('javscripts', 'javascript')) #FALSE
# print(scramble('cedewaraaossoqqyt', 'codewars'))
print(scramble('scriptingjava', 'javascript'))