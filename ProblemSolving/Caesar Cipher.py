length = int(input())
string = input()
cipher = int(input())

result = ""
for i in range(length):
    num = ord(string[i])
    if 97 <= num <= 122:
        result += chr(((num-97+cipher)%26)+97)
    elif 65 <= num <= 90:
        result += chr(((num-65+cipher)%26)+65)
    else:
        result += string[i]
   

print(result)

