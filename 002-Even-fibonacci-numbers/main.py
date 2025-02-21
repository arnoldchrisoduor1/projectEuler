def sum_even_fibonacci(limit):
    a = 0
    b = 1
    numbers = []
    sum = 0
    
    while(a < limit):
        a, b = b, a + b
        if (a % 2 == 0):
            numbers.append(a)
            sum += a
    return sum, numbers

sum_result, numbers_result = sum_even_fibonacci(4000000)

print("Sum of even-valued Fibonacci terms not exceeding 4,000,000:", sum_result)
print("Even-valued Fibonacci numbers:", numbers_result)
        