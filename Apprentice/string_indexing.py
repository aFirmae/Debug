# indexing = accessing elements of a sequence using [ ] (indexing operator)
#                     [start : end : step]

credit_number = "1234-5678-9012-3456"

print(credit_number[0])  # at index 0
print(credit_number[0:4])  # index 0 (inclusive) to 4 (exclusive)
print(credit_number[:4])  # blank at start means 0
print(credit_number[4:8])  # index 4 (inclusive) to 8 (exclusive)
print(credit_number[4:])  # index 4 (inclusive) to end
print(credit_number[-1])  # last digit
print(credit_number[-2])  # second last digit
print(credit_number[-4:])  # start from 4th last digit to end
print(credit_number[::2])  # every 2nd element
print(credit_number[::3])  # every 3rd element
print(credit_number[::-1])  # reverses string

# EXERCISE 1
# credit_number = "1234-5678-9012-3456"
# last_digits = credit_number[-4:]
# print(f"XXXX-XXXX-XXXX-{last_digits}")

# EXERCISE 2
# credit_number = "1234-5678-9012-3456"
# credit_number = credit_number[::-1]
# print(credit_number)

credit_number = credit_number[:-1]  # remove last letter from string (similar to credit_number -= 1 but for strings)