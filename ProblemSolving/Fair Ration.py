n = int(input())

myArray = [int(x) for x in input().split()]
loaves = 0
for i in range(len(myArray) - 1):
    if(myArray[i] % 2 != 0):
        myArray[i] = myArray[i] + 1
        myArray[i+1] = myArray[i+1] + 1
        loaves += 2

count = 0
for i in myArray:
    if(i%2 != 0):
        print("NO")
        break
    else:
        count += 1
if(count == len(myArray)):
    print(loaves)
