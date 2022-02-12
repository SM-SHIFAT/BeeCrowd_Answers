while True:
    count = 0
    try:
        temp_first_line = input()
        first_line = temp_first_line.split()
        n = int(first_line[0])
        a_min = int(first_line[1])
        a_max = int(first_line[2])

        for x in range(n):
            temp = int(input())
            if(temp >= a_min and temp <= a_max):
                count = count +1
        print(count)


    except EOFError:
        break
