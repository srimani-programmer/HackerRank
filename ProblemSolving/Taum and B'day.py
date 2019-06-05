n = int(input())

while n != 0:
    b,w = input().split(" ")
    b = int(b)
    w = int(w)

    bc, wc, z = input().split(" ")
    bc = int(bc)
    wc = int(wc)
    z = int(z)

    if(bc > wc and (wc+z) < bc):
        print((b*wc) + (w*wc) + (b*z))
    elif(wc > bc and (bc + z) < wc):
        print((b*bc) + (w*bc) + (w*z))
    else:
        print(b*bc + w*wc)
    
    n = n - 1
