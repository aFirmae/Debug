# -------------------------------
#       STRING METHODS
# -------------------------------
# uname = input("Enter your uname: ")
# phone_number = input("Enter your phone number: ")

# length = len(uname)
# index = uname.find(" ") ---> Linear Search
# uname = uname.capitalize()
# uname = uname.upper()
# uname = uname.lower()
# uname1, uname2 = uname.split()  ---> splits the string (from a delimiter) into 2 strings
# uname = uname.replace("a", "b")  ----> replace 'a' with 'b' in the string
# result = uname.isdigit()
# result = uname.isalpha()
# result = phone_number.count(" ")
# phone_number = phone_number.replace("-", "")

# -------------------------------
#              EXERCISE
# -------------------------------
username = input("Enter a username: ")

if len(username) > 20:
    print("Your uname can't be more than 20 characters")
elif len(username) < 8:
    print("Your uname can't be less than 8 characters")
elif not username.find(" ") == -1:
    print("Your username can't contain spaces")
elif not username.isalpha():
    print("Your username can't contain digits")
else:
    print(f"Welcome {username}!")
