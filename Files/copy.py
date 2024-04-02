# copyfile() =  copies contents of a file
# copy() =  copyfile() + permission mode + destination can be a directory
# copy2() =  copy() + copies metadata (file’s creation and modification times)

import shutil

shutil.copyfile(
    r"C:\Users\user\OneDrive - RICE Group\Debug\Python Source File\Files\ex_files\Poem.txt",
    r"C:\Users\user\OneDrive - RICE Group\Debug\Python Source File\Files\ex_files\Poem_copy.txt",
)

with open(r"C:\Users\user\OneDrive\Desktop\Poem_copy.txt") as file:
    print(file.read())
