while True:

    try:
        p = int(input())
        if(p == -1):
            break
        if (p== 0):
            print(p)
            continue
        else:
            print(p-1)


    except EOFError:
        break
