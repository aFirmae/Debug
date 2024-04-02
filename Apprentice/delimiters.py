# Example 1: Space delimiter
sentence = "Hello world! How are you?"
words = sentence.split()  # Splitting based on space delimiter

print("Example 1 - Space delimiter:")
print("Sentence:", sentence)
print("Words:", words)  # Output: ['Hello', 'world!', 'How', 'are', 'you?']
print()

# Example 2: Comma delimiter
numbers = "1,2,3,4,5"
number_list = numbers.split(',')  # Splitting based on comma delimiter

print("Example 2 - Comma delimiter:")
print("Numbers:", numbers)
print("Number List:", number_list)  # Output: ['1', '2', '3', '4', '5']
print()

# Example 3: Custom delimiter
sentence = "I|like|Python|programming"
parts = sentence.split('|')  # Splitting based on custom delimiter

print("Example 3 - Custom delimiter:")
print("Sentence:", sentence)
print("Parts:", parts)  # Output: ['I', 'like', 'Python', 'programming']
print()

# Example 4: No delimiter specified (whitespace delimiter)
sentence = "Python is awesome!"
words = sentence.split()  # Splitting without specifying delimiter

print("Example 4 - No delimiter specified:")
print("Sentence:", sentence)
print("Words:", words)  # Output: ['Python', 'is', 'awesome!']

# ------------------------------
#             Outputs
# ------------------------------
# Example 1 - Space delimiter:
# Sentence: Hello world! How are you?
# Words: ['Hello', 'world!', 'How', 'are', 'you?']
#
# Example 2 - Comma delimiter:
# Numbers: 1,2,3,4,5
# Number List: ['1', '2', '3', '4', '5']
#
# Example 3 - Custom delimiter:
# Sentence: I|like|Python|programming
# Parts: ['I', 'like', 'Python', 'programming']
#
# Example 4 - No delimiter specified:
# Sentence: Python is awesome!
# Words: ['Python', 'is', 'awesome!']

