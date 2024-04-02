sentence = input("Enter a sentence: ")
words = sentence.split()

for word in words:
    print(f"{word[0].upper()}.", end="")
