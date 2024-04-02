name = input("Name: ")
name = name.lower()
result = name.find(" ") + 1
first_name = name[0:result].capitalize()
second_name = name[result:].capitalize()
print(f"Initials: {first_name[0]}.{second_name[0]}")  # just initials
print(f"Full name: {first_name}{second_name}")  # full name
