while True:
    grades = []
    try:
        line = input()
        NQ = line.split()
        N = int(NQ[0])
        Q = int(NQ[1])

        for i in range(N):
            temp = int(input())
            grades.append(temp)
        grades.sort(reverse=True)
        #print(grades)

        for i in range(Q):
            queries = int(input())
            print(grades[queries-1])



    except EOFError:
        break
