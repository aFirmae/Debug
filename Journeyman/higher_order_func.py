#  Higher Order Function =  a function that either:
#                           1. accepts a function as an argument
#                               or
#                           2. returns a function
#                           (In python, functions are also treated as objects)


# ----- 1. accepts a function as an argument -----
def sum(n, func):
    total = 0
    for num in range(1, n + 1):
        total += func(num)
    return total

def square(x):
    return x * x

def cube(x):
    return x * x * x

print(sum(3, square))
print(sum(3, cube))


# ----- 2. returns a function -----
# 2.1
def greet(person):
    def get_mood():
        msg = "Hello there!"
        return msg

    result = get_mood() + " " + person
    return result

print(greet("Toby"))


# 2.2
def divisor(x):
    def dividend(y):
        return y / x

    return dividend

divide = divisor(2)
# divide is now a function with y = 2 | AKA divide = dividend | Assigning a function to a variable
print(divide(10)) # 5.0
# OR, you can do this:
print(divisor(2)(10)) # 5.0
