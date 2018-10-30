def evenFibSum(limit) : 
    if (limit < 2) : 
        return 0
  
    # Initialize first two even prime numbers 
    # and their sum 
    ef1 = 0
    ef2 = 2
    summation = ef1 + ef2 
      
    # calculating sum of even Fibonacci value 
    while (ef2 <= limit) : 
  
        # get next even value of Fibonacci  
        # sequence 
        ef3 = 4 * ef2 + ef1 
  
        # If we go beyond limit, we break loop 
        if (ef3 > limit) : 
            break
  
        # Move to next even number and update 
        # sum 
        ef1 = ef2 
        ef2 = ef3 
        summation = summation + ef2 
      
    return summation 

#if __name__ == "__main()__":
t = eval(input())
while t:
    val = eval(input())
    print(evenFibSum(val))
    t = t-1



