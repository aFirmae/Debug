# Lamnda Functions:
#   - A lambda function is a small anonymous function.
#   - A lambda function can take any number of arguments, but can only have one expression.

lambda x: x + 1
# is the same as:
def add_one(x):
    return x + 1


# Lambda functions can be assigned to variables, and used like normal functions.
add_one = lambda x: x + 1
print(add_one(2)) # 3


# Use of a lambda funtion:
num = 13

is_even = lambda num: num % 2 == 0
print(is_even(num)) # False

is_prime = lambda num: all(num % i for i in range(2, num))  # all() returns True if all items in an iterable are true, otherwise it returns False.
print(is_prime(num)) # True


# Multiple arguments can be passed to a lambda function.
add = lambda x, y: x + y
print(add(2, 3)) # 5

mutiply = lambda x, y, z: x * y * z
print(mutiply(2, 3, 4)) # 24


# Lambda functions can also be used as arguments to higher-order functions.
def double(x):
    return x * 2

def triple(x):
    return x * 3

def quadruple(x):
    return x * 4

def func(func, x):
    return func(x)

print(func(double, 2)) # 4

# is the same as:
double = lambda x: x * 2
triple = lambda x: x * 3
quadruple = lambda x: x * 4

def func(func, x):
    return func(x)

print(func(double, 2)) # 4


# Lambda functions can be used to return a function.
def create_adder(x):
    def adder(y):
        return x + y
    return adder

add_10 = create_adder(10)
print(add_10(3)) # 13

# is the same as:
create_adder = lambda x: lambda y: x + y
add_10 = create_adder(10)
print(add_10(3)) # 13

