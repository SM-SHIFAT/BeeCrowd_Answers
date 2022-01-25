def recur(n):
    val = 0.0
    if(n==0):
        return 1/6
    else:
        val = 1/(6+recur(n-1))
        return val

while True:

    try:
        n = int(input())
        if(n==0):
            print("3.0000000000")
        else:
            val = recur(n-1)
            val = val + 3
            print("%5.10f" % val)


    except EOFError:
        break
