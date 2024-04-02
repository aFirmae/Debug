sentence = input("Enter a sentence: ")
words = sentence.split()

i = 0
# print("Word that have numbers in your sentence: ")

for word in words:
    if word.isalnum() and not word.isalpha() and not word.isdigit():
        # checks if the word is alpha-numeric and not entirely alphabetical and or digital
        print(f"{i + 1}. {word}")