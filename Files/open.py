try:
    with open(r"C:\Users\user\OneDrive\Desktop\Poem.txt", "r") as file:
        print(file.read())
    # Or use the following code. Same result but the file is not automatically closed.
    # file = open(r"C:\Users\user\OneDrive\Desktop\Poem.txt", "r")
    # print(file.read())
except FileNotFoundError:
    print("File not found")
except PermissionError:
    print("You don't have the permission to read the file")
except Exception as e:
    print("Something went wrong")
    print(e)
finally:
    file.close()  # Not necessary as the file is automatically closed when the with block is exited
