# map() - applies a function to all items in an iterable
# syntax: map(function, iterable)

# ---- EXAMPLE 1 ----
values = range(1, 11)  # iterable list of values from 1 to 10


def add_five(x):  # function to add 5 to a value
    return x + 5


values = list(map(add_five, values))  # map() function returns a map object, so we convert it to a list

print(values)  # [6, 7, 8, 9, 10, 11, 12, 13, 14, 15]


# ---- EXAMPLE 2 ----
list1 = [1, 2, 3, 4, 5]  # iterable list of values


def square(x):  # function to square a value
    return x**2


list2 = list(map(square, list1))  # apply square() function to all items in list1

print(list2)  # [1, 4, 9, 16, 25]


# ---- EXAMPLE 3 ----
tuple1 = ("apple", "banana", "mango")  # iterable tuple of values


def length(x):  # function to find length of a string
    return len(x)


tuple2 = tuple(map(length, tuple1))  # apply length() function to all items in tuple1

print(tuple2)  # (5, 6, 5)


# ---- EXAMPLE 4 ----
tuple1 = ("apple", "banana", "mango")  # iterable tuple of values

tuple2 = tuple(map(str.capitalize, tuple1))  # apply capitalize() function to all items in tuple1

print(tuple2)  # ('Apple', 'Banana', 'Mango')


# ---- EXAMPLE 5 ----
list1 = [1, 2, 3, 4, 5]  # iterable list of values

list2 = list(map(lambda x: x**2, list1))  # apply lambda function to all items in list1

print(list2)  # [1, 4, 9, 16, 25]


# ---- EXAMPLE 6 ----
store = [("shirt", 20.00), ("pants", 25.00), ("jacket", 50.00), ("socks", 10.00)]

to_euros = lambda data: (data[0],data[1] * 0.82,)  # lambda function to convert dollars to euros
to_cap = lambda data: (data[0].capitalize(),data[1])  # lambda function to capitalize the first letter of a string

to_cap_euros = lambda data: (data[0].capitalize(),data[1] * 0.82)  # lambda function to capitalize the first letter of a string and convert dollars to euros

# Simple mapping.
print(list(map(to_euros, store)))
print(list(map(to_cap, store)))
print(list(map(to_cap_euros, store)))

# Chained mapping.
print(list(map(to_cap, map(to_euros, store))))
