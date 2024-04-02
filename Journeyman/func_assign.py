# Assigning functions to variables
def addition(a, b):
    return a + b

add = addition  # assigning the function to a variable, kinda like a pointer in C/C++
print(add(1, 2))

# Assigning functions to lists
def subtraction(a, b):
    return a - b

def multiplication(a, b):
    return a * b

def division(a, b):
    if b == 0:
        return "Cannot divide by zero"
    return a / b

operations = [addition, subtraction, multiplication, division]
# calling the functions from the list
print(operations[0](1, 2)) # at index 0, the function addition is stored
print(operations[1](1, 2)) # at index 1, the function subtraction is stored
print(operations[2](1, 2)) # at index 2, the function multiplication is stored
print(operations[3](1, 2)) # at index 3, the function division is stored
