t = int(input())

while t > 0:
    num = int(input())
    num = 2 ** num
    sum = 0
    while num != 0:
        val = num % 10
        sum += val
        num = num // 10
    print(sum)
    t = t-1
