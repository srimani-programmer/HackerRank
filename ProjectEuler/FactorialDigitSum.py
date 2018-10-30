import math as m

t = eval(input())
while t:
    n = eval(input())
    sum = 0
    res = m.factorial(n)

    while res != 0:
        val = res % 10
        sum += val
        res = res//10
    t = t-1
    print(sum)