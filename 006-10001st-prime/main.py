def is_prime(n):
    if n < 2:
        return False
    for num in range(2, int(n ** 0.5) + 1):
        if n % num == 0:
            return False
    return True
    
def all_primes(nums):
    count = 0
    values = []
    n = 1
    while count < nums:
        if is_prime(n):
            print("Found prime", n)
            values.append(n)
            count += 1
        n += 1
    print(values)
    
all_primes(10001)