foods = []  # empty list, can also be written as foods = list()

# while True:
#     new_food = input("What food do you like? - ")
#     if new_food == "quit":
#         break
#     foods.append(new_food)

# Using Walrus Operator (:=) - assigns values to variables as part of a larger expression
while (new_food := input("What food do you like? - ")) != "quit":
    foods.append(new_food)

# *More examples of Walrus Operator
# prints the number entered by the user until 0 is entered
while (num := int(input("Enter a number: "))) != 0:
    print(f"Number: {num}")

# This program will print the number of characters in the user's input
while (text := input("Enter some text: ")) != "quit":
    # if the user enters nothing, the program will ask for input again
    if text == "":
        continue
    print(f"You entered {len(text)} characters")


# Application: Number Guessing Game (Open rng.py for the same program with and without Walrus Operator)
