days = int(input())

shared = 5
liked = 0
cumulative = 0
for i in range(1, days+1):
    liked = shared // 2
    if(cumulative == 0):
        cumulative = liked
        shared = liked * 3
    else:
        cumulative += liked 
        shared = liked * 3
print(cumulative)

