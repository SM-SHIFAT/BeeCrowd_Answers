def recur(n):
    val = 0.0
    if(n==0):
        return 1/2
    else:
        val = 1/(2+recur(n-1))
        return val

while True:

    try:
        n = int(input())
        if(n==0):
            print("1.0000000000")
        else:
            val = recur(n-1)
            val = val + 1
            print("%5.10f" % val)


    except EOFError:
        break
