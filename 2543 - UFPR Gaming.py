while True:


    try:
        N_id = input()
        temp = N_id.split()
        n = int(temp[0])
        id = int(temp[1])

        count = 0

        for x in range(n):
            id_flag = input()
            temp = id_flag.split()
            flag = int(temp[1])

            if(flag == 0):
                ids = int(temp[0])
                if(ids == id):
                    count = count+1
        print(count)



    except EOFError:
        break
