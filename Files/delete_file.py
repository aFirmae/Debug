# deleting files / folders in the ex_files folder
import os, shutil
os.chdir(r"C:\Users\user\OneDrive - RICE Group\Debug\Python Source File\Files\ex_files")

path = r"[file/folder path]"

try:
    pass
    # os.remove(path)  # Does not remove folders
    # os.rmdir(path)  # Removes empty folders only
    # shutil.rmtree(path)  # Removes folders and all its contents
except FileNotFoundError:
    print("That file/folder was not found")
except PermissionError:
    print("You do not have permission to delete that")
except OSError:
    print("You cannot delete that using that function")
else:
    print("File was deleted")