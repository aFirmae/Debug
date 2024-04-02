name = input("Enter your uname: ")
# age = input("Enter your age: ")
# age = int(age)
# Instead of typecasting separately, we can...
age = int(input("Enter your age: "))

age += 1.0   # implicit typecasting to float
print(f"Hello {name}")
print(f"You are {age} years old")

print(type(age))   # will print <class 'float'>
