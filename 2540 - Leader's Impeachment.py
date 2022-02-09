while True:

    try:
        N = int(input())
        line = input()
        v = line.split()
        count_vote = 0.0

        for x in v:
            if(x=='1'):
                count_vote = count_vote + 1

        if(count_vote >= (N*2)/3):
            print("impeachment")
        else:
            print("acusacao arquivada")



    except EOFError:
        break
