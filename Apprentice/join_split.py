# Example 1: Joining a list of strings
words = ['Python', 'is', 'easy', 'to', 'learn']
print(" ".join(words))  # Output: Python is easy to learn

# Example 2: Joining a list of numbers with a delimiter
numbers = ['1', '2', '3', '4', '5']
print(",".join(numbers))  # Output: 1,2,3,4,5

# Example 3: Joining a tuple of strings and numbers
my_tuple = ("John", "Peter", "Vicky")
print("#".join(my_tuple))  # Output: John#Peter#Vicky

# Example 4: Joining a string and a list
print("Python".join(numbers))  # Output: 1Python2Python3Python4Python5

# Example 5: Joining a string and a tuple
print("Python".join(my_tuple))  # Output: JohnPythonPeterPythonVicky


# Splitting a string into a list of substrings
# Example 1: Splitting a string separated by space
sentence = "Python is easy to learn"
words = sentence.split()

# Example 2: Splitting a string basd on delimiter
input_str = 'Kumar_Ravi_003'
first_name, second_name, customer_code = input_str.split("_")

print(second_name)
print(first_name)
print(customer_code)


# Another way to use split.
input_str = 'Kumar_Ravi_003'
first_name = input_str.split("_")[1]
second_name = input_str.split("_")[0]
customer_code = input_str.split("_")[2]

print(first_name)
print(second_name)
print(customer_code)
