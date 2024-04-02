name: str = "Nilashis Saha"
age: int = 21

print("My name is " + name + " and I am " + str(age) + " years old.")    # separate arguments (converts to string)
print("My name is", name, "and I am", age, "years old.")                 # string concatenation
print("My name is %s and I am %d years old." % (name, age))              # old style kinda like C
print("My name is {} and I am {} years old.".format(name, age))          # format method
print(f"My name is {name} and I am {age} years old.")                    # f-strings (Most preferred) - Python 3.6+ only
