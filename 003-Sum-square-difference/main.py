def sum_square_difference(n):
    sum1 = 0
    sum2 = 0
    for num in range(n+1):
        sum1 += (num * num)
        
    for num in range(n+1):
        sum2 += num

    sum2 = (sum2 * sum2)
    
    print("The sum of the squares", sum1)
    print("The square of the sum, ", sum2)
    
    difference = sum2 - sum1
    
    return difference

result = sum_square_difference(100)
print("The difference betwween sum of squares and square of sum is: ", result)