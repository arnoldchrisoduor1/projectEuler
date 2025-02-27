def find_pythagorean_triplet_with_sum(target_sum):
    for a in range(1, target_sum):
        for b in range(a + 1, target_sum - a):
            c = target_sum - a - b
            if a**2 + b**2 == c**2:
                return a, b, c
    return None

# Target sum: a + b + c = 1000
target_sum = 1000

# Find the triplet
triplet = find_pythagorean_triplet_with_sum(target_sum)

if triplet:
    a, b, c = triplet
    product = a * b * c
    print(f"The Pythagorean triplet is: ({a}, {b}, {c})")
    print(f"The product abc is: {product}")
else:
    print("No such Pythagorean triplet exists.")