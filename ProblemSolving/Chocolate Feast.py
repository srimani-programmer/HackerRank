n = int(input())

for i in range(n):
    amount, cost, wrapper = input().split(" ")
    amount = int(amount)
    cost = int(cost)
    wrapper = int(wrapper)
    totalChoclateCount = amount // cost
    wrappersCount = totalChoclateCount

    while True:
        if(wrappersCount >= wrapper):
            wrappersCount -= wrapper
            totalChoclateCount += 1
            wrappersCount += 1
        else:
            break
    print(totalChoclateCount)
        
    

