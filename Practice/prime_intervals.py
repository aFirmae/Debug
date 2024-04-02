def isPrime(num):
    for i in range(2, (num // 2) + 1):
        if num % i == 0:
            return False
    return True

# Takes user input
low = int(input("Lower bound: "))
high = int(input("Higher bound: "))
count = 0

# Swaps the upper and lower bound..
if low > high:
    low = low + high
    high = low - high
    low = low - high

print(f"Prime numbers between {low} and {high} are: ")

# Prime number checker between low and high
for i in range(low, high + 1):
    if i < 2:
        continue

    elif isPrime(i):
        if count > 0:
            print(",", end=" ")

        print(i, end="")
        count += 1
