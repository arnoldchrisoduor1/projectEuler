# finding the largest prime of a number.
def is_prime(num):
    if num < 2:
        return False
    
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_factors(n):
    factors = []
    
    # finding all the factors of n.
    for i in range(2, n + 1):
        print(".... Checking....", i)
        while n % i == 0:
            print("Checking for primeness ../.../..", i)
            if is_prime(i):
                print("========== Found prime =====", i)
                factors.append(i)
            n //= i
    return factors

primes = prime_factors(600851475143)
print(primes)
print(sorted(primes)[-1])