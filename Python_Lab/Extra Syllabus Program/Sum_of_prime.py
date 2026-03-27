# Find the sum of all primes below 2 million

limit = 2000000

# Sieve of Eratosthenes - most efficient method
is_prime = [True] * limit
is_prime[0] = False  # 0 is not prime
is_prime[1] = False  # 1 is not prime

i = 2
while i * i < limit:
    if is_prime[i]:
        # Mark all multiples of i as not prime
        for j in range(i * i, limit, i):
            is_prime[j] = False
    i += 1

# Sum all prime numbers
total = sum(i for i in range(limit) if is_prime[i])

print(f"Sum of all primes below 2,000,000 = {total}")