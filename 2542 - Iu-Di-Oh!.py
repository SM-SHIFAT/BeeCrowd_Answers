while True:
    Mlist = []
    Llist = []

    try:
        N = int(input())
        ML = input()
        MLlist = ML.split()
        M = int(MLlist[0])
        L = int(MLlist[1])

        for x in range(M):
            a = input()
            b = a.split()
            Mlist.append(b)
        for x in range(L):
            a = input()
            b = a.split()
            Llist.append(b)

        CMCL = input()
        CmCl = CMCL.split()
        Cm = int(CmCl[0])
        Cl = int(CmCl[1])
        chosen = int(input())

        mm = int(Mlist[Cm-1][chosen-1])
        ll = int(Llist[Cl-1][chosen-1])

        if(mm > ll):
            print("Marcos")
        elif(mm < ll):
            print("Leonardo")
        else:
            print("Empate")


    except EOFError:
        break
