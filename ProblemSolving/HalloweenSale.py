price,reduced_cost,const_dollar,total_amount = input().split(" ")
price = int(price)
reduced_cost = int(reduced_cost)
const_dollar = int(const_dollar)
total_amount = int(total_amount)

videoGamesCount = 0
grand_total = 0

while True:
    grand_total += price
    if((price - reduced_cost) > const_dollar):
        price = price - reduced_cost
    else:
        price = const_dollar
    if(grand_total <= total_amount):
        videoGamesCount += 1
    else:
        break
print(videoGamesCount)