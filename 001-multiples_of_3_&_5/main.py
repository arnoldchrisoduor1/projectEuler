sum = 0

for num in range(0, 1000):
    if num % 3 == 0 or num % 5 == 0:
        sum += num
        
print("The sum is", sum)