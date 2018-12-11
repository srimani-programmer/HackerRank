t = int(input().strip())
sum = 0
while t != 0:
    val = int(input().strip())
    sum = sum + val
    t = t - 1
sum = str(sum)
print(sum[:10])
