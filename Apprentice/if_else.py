# if = Do some code IF condition is True
# else = Do something else if above condition/s are False

# name = input("Enter you uname: ")
# flag = False

# if not name:
# 	print("You didn't type anything!")
# else:
# 	age = int(input("Enter you age: "))
# 	if age > 59:
# 		print("You are too old to sign up!")
# 	elif age >= 18:
# 		print("You are now signed up!")
# 		flag = True
# 	elif age < 0:
# 		print("You haven't been born yet!")
# 	elif age == 0:
# 		print("That's literally nothing! ZERO!!")
# 	else:
# 		print("You must be 18+ to sign up!")

# if flag:
# 	response = input("Want to cancel subscription? (Y/N): ")
# 	if response == 'Y':
# 		print("Subscription Cancelled")
# 	else:
# 		print("Thanks for not Unsubscribing!")


# Conditional statements with match-case statements
# Python 3.10+ only

name = input("Name: ").lower()
con = a = e = i = o = u = 0

for letter in name:
    match letter:
        case 'a':
            a += 1
        case 'e':
            e += 1
        case 'i':
            i += 1
        case 'o':
            o += 1
        case 'u':
            u += 1
        case _:
            if letter == " ":
                pass
            else:
                con += 1

print(f"Number of vowels in {name.capitalize()}: ")
print(f"a = {a}")
print(f"e = {e}")
print(f"i = {i}")
print(f"o = {o}")
print(f"u = {u}")

print(f"Number of consonants in {name.capitalize()}: {con}")

