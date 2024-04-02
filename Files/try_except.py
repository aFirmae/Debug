# exception =   events detected during execution that interrupt the flow of a program

try:
    numerator = int(input("Enter a number to divide: "))
    denominator = int(input("Enter a number to divide by: "))
    result = numerator / denominator
except ZeroDivisionError as e:
    print(e)
    print("You can't divide by zero! idiot!")
except ValueError as e:
    print(e)
    print("Enter only numbers plz")
except Exception as e:
    print(e)
    print("something went wrong :(")
else:
    print(result)
finally:
    print("This will always execute")

# ----------- EXAMPLE -------------
import os

os.chdir("C:\\Users\\user\\OneDrive - RICE Group\\Debug\\Python Source File\\Files\\ex_files")

try:
    file = open("Poem.txt", "r")
    print(file.read())
except Exception as e:
    print(e)
finally:
    file.close()


# Frequently used exceptions
# 1. Zero Division Error
# 2. Value Error
# 3. Type Error
# 4. Module Not Found Error
# 5. Name Error
# 6. File Not Found Error
