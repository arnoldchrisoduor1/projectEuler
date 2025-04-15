# we want to find the first triangle natutal number to have more than 500 divisors, 

def count_divisors(n):
    """ Count the number of divisors for a given number """
    # an efficient way to count divisors.
    count = 0
    i = 1
    while i * i <= n: #only checking upto the square root of (n)
        if n % i == 0:
            # if it is a divisor then n/i is also a devisor
            # But if i == n/i (perfect square), count only once.
            
            if i == n // i:
                count +=1
            else:
                count += 2
                
        i += 1
    return count


def find_triangle_number_with_divisors(min_divisors):
    """ Find first number with more than min_divisors """
    trangle_num = 0
    n = 1
    
    while True:
        # Generate the next triangle number
        triangle_num += n
        n += 1
        
        # Coun divisors.
        num_divisors = count_divisors(triangle_num)
        
        # Check if we've found our answer.
        if num_divisors > min_divisors:
            return triangle_num, num_divisors
        
# Testing the algorithm.
result, divisor_count = find_triangle_number_with_divisors(500)
print(f"The first triangle number with over 500 divisors is { result } with { divisor_count }")