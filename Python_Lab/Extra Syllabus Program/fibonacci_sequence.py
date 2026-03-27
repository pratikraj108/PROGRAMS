# Sum of even-valued Fibonacci terms that do not exceed 4 million

limit = 4000000

# Starting values
a, b = 1, 2
even_sum = 0

print("Even Fibonacci numbers below 4,000,000:")

while a <= limit:
    if a % 2 == 0:        # Check if even
        print(a)
        even_sum += a     # Add to sum

    a, b = b, a + b       # Next Fibonacci number

print(f"\nSum of even Fibonacci terms = {even_sum}")