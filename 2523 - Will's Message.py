def Convert(string):
    list1=[]
    list1[:0]=string
    return list1
while True:
    alpha = []
    N = -1
    light_index = []
    text=""
    try:
        line = input()
        alpha=Convert(line)
        N = int(input())
        light = input()
        light_index = light.split()

        for x in light_index:
            text = text + alpha[int(x)-1]
        print(text)

    except EOFError:
        break
