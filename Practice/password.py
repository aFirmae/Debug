""" Validate User Input
1. Password must be between 8-20 characters
2. Password must not include spaces
3. Password must include digits and alphabets
4. Password must include at-least one special characters
5. Password must not all be special characters
"""
import string

# Prompt user for password
pswd = input("Password: ")
# Check password length
if not 8 <= len(pswd) <= 20:
    print("Password must be between 8-20 characters.")
# Check for spaces in password
elif not pswd.find(" ") == -1:
    print("Password must not include spaces.")
# Check if password is only digits
elif pswd.isdigit():
    print("Password can't only be digits.")
# Check if password is only letters
elif pswd.isalpha():
    print("Password can't only be letters.")
# Check if password is all special characters
elif all(char in string.punctuation for char in pswd):
    print("Password can't be all special characters.")
# Check if password is alphanumeric
elif not pswd.isalnum():
    # Confirm password
    c_pswd = input("Confirm Password: ")
    # Loop until password is confirmed
    while pswd != c_pswd:
        print("Password doesn't match.")
        c_pswd = input("Confirm Password: ")
    print(f"Your password - {pswd}")
# If none of the above conditions are met, password must have at least one special character
else:
    print("Password must have at least one special character.")
