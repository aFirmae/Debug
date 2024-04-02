# Create a file called hello.txt in the current directory before running this program.
import os
os.chdir(r"C:\Users\user\OneDrive - RICE Group\Debug\Python Source File\Files")

source = r"hello.txt"
destination = r"ex_files\hello.txt"


if not os.path.exists(source):
# if FileNotFoundError:
    print("There is no file there")
elif os.path.exists(destination):
    print("There is already a file there")
else:
    os.replace(source, destination)
    print("File was moved")
