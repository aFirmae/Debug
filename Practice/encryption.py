import string
import random

chars = " " + string.punctuation + string.digits + string.ascii_letters
chars = list(chars)

# Random key everytime
# key = chars.copy()
# random.shuffle(key)

# A specific same key
key = ['6', 'p', 'B', 'u', '}', '@', '5', '{', 's', 'Y', 'K', '^', 'R', 'y', 'j', '>', 'Q', ' ', 'E', 'T', '%', '/',
            '<', ']', 'd', 'S', '2', 'i', 'F', '\\', '`', 'L', 'r', 'm', 'x', 'D', 'W', 'A', '"', '[', '#', '+', 'z', 'H',
            'C', '9', 'a', 'f', 'I', 'k', ',', 't', '4', 'e', 'G', ';', '|', '(', 'M', 'O', ')', 'v', '&', 'n', 'X', 'P',
            '~', 'J', '=', "'", 'g', '1', 'o', '*', 'l', 'N', 'Z', '.', 'V', '?', '3', 'U', '$', '7', 'b', 'q', 'h', '!',
            '-', '8', '_', ':', 'w', 'c', '0']

# print("Chars: " + str(chars))
# print("Key  : " + str(key))

# ENCRYPTION
print("    ENCRYPTION     ")
plain_text = input("Message: ")
cipher_text = ""

# MY TRY  ---> step-by-step breakdown
# for i in range(len(plain_text)):
#     letter = plain_text[i]
#     index = chars.index(letter)
#     new_letter = key[index]
#     cipher_text += new_letter

# Line efficient code
for letter in plain_text:
    index = chars.index(letter)
    cipher_text += key[index]

print(f"Encryption: {cipher_text}")

print()

# DECRYPTION
print("    DECRYPTION     ")
cipher_text = input("Key: ")
plain_text = ""

for letter in cipher_text:
    index = key.index(letter)
    plain_text += chars[index]

print(f"Decryption: {plain_text}")
