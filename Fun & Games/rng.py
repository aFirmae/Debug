import random

low = int(input("Lower limit: "))
high = int(input("Upper limit: "))
num = random.randint(low, high)
print(num)  # temporary output (CHEATS!!)
guess = 0

while True:
    choice = int(input("Guess your number: "))
    guess += 1
    if choice < num:
        print("Too Low!")
    elif choice > num:
        print("Too High!")
    else:
        print("Correct guess!")
        print(f"Guesses: {guess}")
        break

# fnum = rng.random() # ---> return random floating point number b/w 0 and 1

# Using Walrus Operator (:=)
# while (choice := int(input("Guess your number: "))) != num:
#     guess += 1
#     if choice < num:
#         print("Too Low!")
#     elif choice > num:
#         print("Too High!")

# print("Correct guess!")
# print(f"Guesses: {guess + 1}")
