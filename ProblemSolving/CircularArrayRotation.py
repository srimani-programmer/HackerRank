n,t,m = input().split(" ")
n = int(n)
t = int(t)
m = int(m)

myArray = [int(x) for x in input().split()]

# Result Array
result = []

for q in range(m):
    q = int(input())
    result.append(myArray[(q-t) % n])

for res in result:
    print(res)

