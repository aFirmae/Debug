# while loop = perform some code WHILE some condition remains true

# ---------------- EXAMPLE 1 ----------------

name = input("Enter your name: ")

while name == "":
    print("You did not enter your name!")
    name = input("Enter your name: ")

print(f"Hello {name}")

# ---------------- EXAMPLE 2 ----------------

age = int(input("Enter your age: "))

while age < 0:
    print("Age can't be negative")
    age = int(input("Enter your age: "))

print(f"You are {age} years old")

# ---------------- EXAMPLE 3 ----------------

food = input("Enter a food you like (q to quit): ")

while not food == "q":
    print(f"You like {food}")
    food = input("Enter another food you like (q to quit): ")

print("bye")

# ---------------- EXAMPLE 4 ----------------

num = int(input("Enter a # between 1 - 10: "))

while num < 1 or num > 10:
    print(f"{num} is not valid")
    num = int(input("Enter a # between 1 - 10: "))

print(f"You picked the number {num}")

# for loops = execute a block of code a fixed number of times.
#             You can iterate over a range, string, sequence, etc.

# ---------------- EXAMPLE 1 ----------------

for i in range(1, 11):
    print(i)

# ---------------- EXAMPLE 2 ----------------

for i in reversed(range(1, 11)):
    print(i)

print("Happy New Year!")

# ---------------- EXAMPLE 3 ----------------

for i in range(1, 11, 2):
    print(i)

# ---------------- EXAMPLE 4 ----------------

credit_card = "1234-5678-9012-3456"

for i in credit_card:
    print(i)  # is same as print(i, end="\n")

for i in credit_card:
    print(i, end="")

# ---------------- CONTINUE ----------------

for i in range(1, 21):
    if i == 13:
        continue
    else:
        print(i)

# ---------------- BREAK ----------------

for i in range(1, 21):
    if i == 13:
        break
    else:
        print(i)

# ---------------- ENUMERATE ----------------

fruits = ("Apple", "Banana", "Guava", "Mango", "Litchi")
for i, fruit in enumerate(fruits):  
    # enumerate returns the index of the collection element
    # and the corresponding collection element
    print(f"{i + 1}. {fruit}")

# nested loop = A loop within another loop (outer, inner)
#               outer loop:
#                   inner loop:

rows = int(input("Enter the # of rows: "))
columns = int(input("Enter the # of columns: "))
symbol = input("Enter a symbol to use: ")

for x in range(rows):
    for y in range(columns):
        print(symbol, end="")
    print()
