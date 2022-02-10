while True:
    count = 0
    try:
        n = int(input())

        if(n==1):
            print("0")
        else:
            while n != 1:
                n = n / 2
                count = count + 1
            print(count)


    except EOFError:
        break
