def split(word):
    return list(word)


def listToString(s):
    str1 = ""
    for ele in s:
        str1 += ele
    return str1

def check_list(wlist,tchracter):
    flag = False
    index = -1
    for x in range(len(wlist)):
        if (wlist[x] == tchracter):
            flag = True
            index = x
            break
    return [flag,index]

uppercase = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
lowercase = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
def alphabet(first,secound,chracter):
    flag = -1
    index = -1
    for x in range(len(first)):
        if(chracter.lower() == first[x].lower()):
            flag = 1
            index = x
            break
        if (chracter.lower() == secound[x].lower()):
            flag = 2
            index = x
            break

    return [flag, index]

while True:

    try:
        cn = input()
        nn = list(cn.split(" "))
        c = int(nn[0])
        n = int(nn[1])

        cipheri = input()
        cipherii = input()

        chractersi = split(cipheri)
        chractersii = split(cipherii)

        sentence=['']*n
        #print(n)
        for i in range(n):
            sentence[i] = input()

        #a = alphabet(chractersi[0])
        #print(a)


        for x in sentence:
            final_list = []
            in_list = split(x)
            a=""
            #print(in_list)
            for z in in_list:
                if z.isalpha():
                    find = alphabet(chractersi,chractersii,z)
                    if(find[0]==1):
                        a = chractersii[find[1]]
                    elif(find[0]==2):
                        a = chractersi[find[1]]
                    else:
                        a = z

                    if(z.islower()):
                        final_list.append(a.lower())
                    elif(z.isupper()):
                        final_list.append(a.upper())

                else:
                    chc = check_list(chractersi,z)
                    che = check_list(chractersii, z)
                    #print(chc)
                    if(chc[0] == True):
                        if(chractersii[chc[1]].isalpha()):
                            final_list.append(chractersii[chc[1]].lower())
                        else:
                            final_list.append(chractersii[chc[1]].lower())
                        #print(chractersii[chc[1]])

                    # print(che)
                    elif (che[0] == True):
                        if (chractersii[che[1]].isalpha()):
                            final_list.append(chractersi[che[1]].lower())
                        else:
                            final_list.append(chractersi[che[1]].lower())
                        #print(chractersi[chc[1]])
                    else:
                        final_list.append(z)

            print(listToString(final_list))
        print()







    except EOFError:
        break
