# type casting = The process of converting a value of one data type to another
#                          (string, integer, float, boolean)
#                          Explicit vs Implicit

name = "Daniel"
age = 20
sgpa = 9.32
student = True

print(type(name))
print(type(age))
print(type(sgpa))
print(type(student))

# Explicit typecasting

age = float(age)
print(age)
print(type(age))

sgpa = int(sgpa)
print(sgpa)
print(type(sgpa))

student = str(student)
print(student)
print(type(student))

name = bool(name)
print(name)  # will print False if string is empty

age = bool(age)
print(age)  # anything other than 0 will print True

# Implicit typecasting

x = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10
y = 10

print(x/y)  # result is 5.5 (float) but i and y are both integers
