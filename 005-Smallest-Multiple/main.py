# finding the smallest number thst is evenly divisible by all the numbers from 1 to 10.
# similar to finding the LCM of a number.
import math

def smallest_multiple(n):
    result = 1
    for i in range(1, n + 1):
        # euclidian algorithm for gcd.
        result = math.lcm(result, i)
    return result

# Getting the LCM from scratch.
def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def lcm(a, b):
    return (a * b) // gcd(a, b)

# we can now use the lcm as applied above.

print(smallest_multiple(20))