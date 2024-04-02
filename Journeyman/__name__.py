# Topic- __name__ and __main__

# __name__ is a special variable in python
# __name__ is set to '__main__' when the file is executed directly
# __name__ is set to the name of the module when the file is imported

# 1. Module can be run as a standalone program
#    or
# 2. Module can be imported and used by other modules

#  If the file is being imported from another module, _name_ will be set

#  Python interpreter sets "special variables", one of which is _name_
#  Python will assign the _name_ variable a value of '__main__' if it's the initial module being run

# Example 1
print(__name__)  # prints __main__

# Example 2
import sys
sys.path.append(r"C:\Users\user\OneDrive - RICE Group\Debug\Python Source File\Modules")

import numcheck

print(numcheck.__name__)  # prints numcheck
