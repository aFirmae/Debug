# Create a list of 7 fruits and write it to a file
fruits = ["Apple", "Banana", "Cherry", "Dragon Fruit", "Elderberry", "Fig", "Grape"]

with open(r"C:\Users\user\OneDrive - RICE Group\Debug\Python Source File\Files\ex_files\Fruits.txt", "w") as file:
    file.write("This is a list of fruits:\n")
with open(r"C:\Users\user\OneDrive - RICE Group\Debug\Python Source File\Files\ex_files\Fruits.txt", "a") as file:
    for i in range(7):
        file.write(f"{i + 1}.{fruits[i]}\n")

# Same as above but with a single with statement:
# with open(r"C:\Users\user\OneDrive - RICE Group\Debug\Python Source File\Files\ex_files\Fruits.txt", "w") as file:
#     file.write("This is a list of fruits:\n")
#     for i in range(7):
#         file.write(f"{i + 1}.{fruits[i]}\n")

print(open(r"C:\Users\user\OneDrive - RICE Group\Debug\Python Source File\Files\ex_files\Fruits.txt", "r").read())


# Below code is much better than above code, as it avoids repeating the path
import os

os.chdir(r"C:\Users\user\OneDrive - RICE Group\Debug\Python Source File\Files\ex_files")

# Create a list of 7 fruits and write it to a file
fruits = ["Apple", "Banana", "Cherry", "Dragon Fruit", "Elderberry", "Fig", "Grape"]

with open(r"Fruits.txt", "w") as file:
    file.write("This is a list of fruits:\n")
with open(r"Fruits.txt", "a") as file:
    for i in range(7):
        file.write(f"{i + 1}.{fruits[i]}\n")

# Same as above but with a single with statement:
# with open(r"Fruits.txt", "w") as file:
#     file.write("This is a list of fruits:\n")
#     for i in range(7):
#         file.write(f"{i + 1}.{fruits[i]}\n")

print(open(r"Fruits.txt", "r").read())
