# Everything in this .py file is valid for Lists, Sets and Tuples

fruits = ["apples", "guavas", "grapes", "mangoes"]
vegetables = ["carrots", "celery", "capsicum"]
meats = ["turkey", "beef", "pork", "chicken"]

groceries = [fruits, vegetables, meats]

# Can also be declared like this:
# groceries = [["apples", "guavas", "grapes", "mangoes"],
#                   ["carrots", "celery", "capsicum"]
#                   ["turkey", "beef", "pork", "chicken"]]

print(groceries)  # ---> prints the lists in a list
print(groceries[0])  # ----> prints the first list i.e., fruits
print(groceries[1])  # ----> prints the second list i.e., vegetables

print(groceries[0][0])  # ----> prints the first element in the first list i.e., apples
print(groceries[2][1])  # ----> prints the second element in the third list i.e., beef

# Nested loop to print our 2D List
for every_collection in groceries:
    for every_food in every_collection:
        print(every_food, end=" ")
    print()

# ------------------------------------
#              EXERCISE
# ------------------------------------

# Print a telephone num-pad
# Can't use Sets as they are unordered
# Though lists can be used, but tuples are FASTER.
# We don't want to change the numbers anyway

num_pad = ((1, 2, 3), (4, 5, 6), (7, 8, 9), ('*', 0, '#'))
for a_row in num_pad:
    for a_num in a_row:
        print(a_num, end="  ")
    print()
