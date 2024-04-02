import os

os.chdir(r"C:\Users\user\OneDrive - RICE Group\Debug\Python Source File\Files\ex_files")

text = "Roses are red,\nViolets are blue,\nI'm a Python program,\nAnd I love you.\n"
try:
    # Writing text to a file
    with open(r"Poem.txt", "w") as file:
        file.write("\nI'm writing this using Python.\n")

    # Overwriting the text in the file
    with open(r"Poem.txt", "w") as file:
        file.write(text)

    # Appending text to the file
    with open(r"Poem.txt", "a") as file:
        file.write("This is the end of the poem.\n")

    # Reading the file we just edited
    with open(r"Poem.txt", "r") as file:
        print(file.read())

except Exception as e:
    print(e)
