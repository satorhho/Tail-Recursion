# Linear Recursion
# Issue: Space inefficient
# Runtime: O(n)
def linear_factorial(n):
    if n == 1:
        return n
    
    return n * linear_factorial(n-1)

# Tail recursion variant
# Runtime: O(n)
def tail_factorial(n, accumulator):
    if n == 1:
        return accumulator

    return tail_factorial(n - 1, n * accumulator)

N = int(input("Enter Number: "))
print(linear_factorial(N))
print(tail_factorial(N, 1))