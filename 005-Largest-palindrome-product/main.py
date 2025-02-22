# Finding the largest palindrome product.
def is_palindrome(n):
    return str(n) == str(n)[::-1]

def largest_palindrome_product():
    largest_palindrome = 0
    for x in range(100, 1000):
        for y in range(100, 1000):
            z = x * y
            if is_palindrome(z) and z > largest_palindrome:
                largest_palindrome = z
    return largest_palindrome

result = largest_palindrome_product()
print("The largest palindrome: ", result)