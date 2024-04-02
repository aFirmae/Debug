# filter() - filters an iterable by removing items that don't match a predicate (a function that returns a boolean).
# Syntax: filter(function, iterable)

# filter() is useful when you have a list of items and you want to remove some number of them.

# *For example, say you have a list of numbers and you want to remove all the odd ones or vice_versa.
numbers = [1, 2, 3, 4, 5, 6]
evens = list(filter(lambda x: x % 2 == 0, numbers))
# evens = [x for x in numbers if x % 2 == 0]  # list comprehension (more efficient)
print(evens)  # [2, 4, 6]

odd_ones = list(filter(lambda x: x % 2 != 0, range(1, 11)))  # range() returns an iterator
# odd_ones = [x for x in range(1, 11) if x % 2 != 0]  # returns a list
print(odd_ones)  # [1, 3, 5, 7, 9]


# *For example: say you have a list of people and you want to remove all the people under 18.
people = [("Joe", 78), ("Janet", 20), ("John", 17)]
adults = list(filter(lambda person: person[1] >= 18, people))  # person[1] is the person's age
# adults = [person for person in people if person[1] >= 18]  # list comprehension (can used used for any iterable/collection)
print(adults)  # [("Joe", 78), ("Janet", 20)]


# *Another example: say you have a list of people and you want to remove all the people whose name starts with "J".
people = [("Joe", 78), ("Janet", 20), ("Kyle", 17), ("Katamina", 23), ("Jill", 13), ("Jack", 45)]
people = list(filter(lambda person: person[0][0] != "J", people))  # person[0][0] is the first letter of the person's name
# people = [person for person in people if person[0][0] != "J"]
print(people)  # [("Kyle", 17), ("Katamina", 23)]


# *Another example: say you have a list of people and you want to remove all the people whose name starts with "J" and are under 18.
people = [("Joe", 78), ("Janet", 20), ("Kyle", 17), ("Katamina", 23), ("Jill", 13), ("Jack", 45)]
people = list(filter(lambda person: person[0][0] != "J" and person[1] >= 18, people))
# people = [person for person in people if person[0][0] != "J" and person[1] >= 18]
print(people)  # [("Katamina", 23)]


# *Almost same example: say you have a list of people and you want to remove all the people whose name starts with "J" or are under 18.
people = [("Joe", 78), ("Janet", 20), ("Kyle", 17), ("Katamina", 23), ("Jill", 13), ("Jack", 45)]
people = list(filter(lambda person: person[0][0] != "J" or person[1] >= 18, people))
# people = [person for person in people if person[0][0] != "J" or person[1] >= 18]
print(people)  # [("Joe", 78), ("Janet", 20), ("Kyle", 17), ("Katamina", 23), ("Jack", 45)]


# *filter() on dictionaries
fruits = {"apple": 1, "banana": 2, "orange": 3, "grape": 4}
fruits = dict(filter(lambda fruit: fruit[1] >= 3, fruits.items()))  # fruits.items() returns a list of tuples
print(fruits)  # {"orange": 3, "grape": 4}


# ⁡⁣⁢⁣𝙉͟𝙤͟𝙩͟𝙚⁡: filter() returns an iterator, so you need to convert it to a list if you want to print it.⁡
# ⁡⁣⁣⁢𝙉͟𝙤͟𝙩͟𝙚⁡: filter() is not a list method or a comprehension, it is a built-in function.
# ⁡⁢⁣⁢𝙉͟𝙤͟𝙩͟𝙚⁡: filter() can be used on any iterable/collection, not just lists.⁡
# ⁡⁢⁢⁢𝙉͟𝙤͟𝙩͟𝙚⁡: filter() can be used on dictionaries, but it returns a list of tuples.⁡
