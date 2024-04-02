# reduce() is a function that takes two arguments: a function and a sequence and returns a single value.
# syntax: reduce(function, sequence)  ---> sequence can be any iterable/collection
from functools import reduce


# *For example, say you have a list of numbers and you want to add them all together.
numbers = [1, 2, 3, 4, 5, 6]
total = reduce(lambda x, y: x + y, numbers)  # x is the running total, y is the next number in the list
# total = sum(numbers)  # sum() is a built-in function that does the same thing
print(total)  # 21


# *For example, say you have a list of numbers and you want to multiply them all together.
numbers = [1, 2, 3, 4, 5, 6]
total = reduce(lambda x, y: x * y, numbers)  # x is the running total, y is the next number in the list
# total = math.prod(numbers)  # math.prod() is a built-in function that does the same thing
print(total)  # 720


# *For example, say you have a list of numbers and you want to find the largest one.
numbers = [1, 2, 3, 4, 5, 6]
largest = reduce(lambda x, y: x if x > y else y, numbers)  # x is the running largest, y is the next number in the list
# largest = max(numbers)  # max() is a built-in function that does the same thing
print(largest)  # 6


# *For example, say you have a list of numbers and you want to find the smallest one.
numbers = [1, 2, 3, 4, 5, 6]
smallest = reduce(lambda x, y: x if x < y else y, numbers)  # x is the running smallest, y is the next number in the list
# smallest = min(numbers)  # min() is a built-in function that does the same thing
print(smallest)  # 1


# *For example, say you have a list of numbers and you want to find the average.
numbers = [1, 2, 3, 4, 5, 6]
average = reduce(lambda x, y: x + y, numbers) / len(numbers)  # x is the running total, y is the next number in the list
# average = statistics.mean(numbers)  # statistics.mean() is a built-in function that does the same thing
print(average)  # 3.5


# *For example, say you have tuple of characters and you want to turn them into a string.
characters = ("H", "e", "l", "l", "o")
string = reduce(lambda x, y: x + y, characters)  # x is the running string, y is the next character in the tuple
# string = "".join(characters)  # "".join() is a built-in function that does the same thing
print(string)  # Hello


# *For example, say you have a list of words and you want to turn them into a sentence.
words = ["Hello", "World", "!"]
sentence = reduce(lambda x, y: x + " " + y, words)  # x is the running sentence, y is the next word in the list
# sentence = " ".join(words)  # " ".join() is a built-in function that does the same thing
print(sentence)  # Hello World !