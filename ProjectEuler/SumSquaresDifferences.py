n = int(input())

while n > 0:
    val = int(input())
    sumSquare = ((val * (val+1))//2) ** 2
    squaresSum = (val * (val+1)*(2*val+1))//6
    print(sumSquare - squaresSum)
    n = n - 1
