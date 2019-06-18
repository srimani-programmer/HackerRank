n = int(input())

while n != 0:
    money = int(input())
    size = int(input())
    flaours = [int(x) for x in input().split(" ")]
    ic1 = 0
    ic2 = 0
    for i in range(len(flaours)-1):
        for j in range(i+1, len(flaours)):
            if(flaours[i] + flaours[j] == money):
                ic1 = i+1
                ic2 = j+1
                break
    
    n = n - 1
    print(ic1, ic2)

