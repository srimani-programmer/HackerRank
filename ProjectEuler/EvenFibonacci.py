def evenFibSum(limit) : 
    if (limit < 2) : 
        return 0
  
    # Initialize first two even prime numbers 
    # and their sum 
    a = 0
    b = 2
    summation = a + b 
      
    # calculating sum of even Fibonacci value 
    while (b <= limit) : 
  
        # get next even value of Fibonacci  
        # sequence 
        c = 4 * b + a 
  
        # If we go beyond limit, we break loop 
        if (c > limit) : 
            break
  
        # Move to next even number and update 
        # sum 
        a = b
        b = c 
        summation = summation + b 
      
    return summation 

#if __name__ == "__main()__":
t = eval(input())
while t:
    val = eval(input())
    print(evenFibSum(val))
    t = t-1



