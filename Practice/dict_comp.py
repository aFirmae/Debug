# Create a dictionary where the keys are multiples of 3 among 
# the first 100 natural numbers and each value is the cube of the key.

# Create a list of numbers from 1 to 99
numbers = list(range(1, 100))

# Create an empty dictionary to store the cubes of numbers divisible by 3
cubes_dict = {}

# Iterate over each number in the list
for num in numbers:
    # Check if the number is divisible by 3
    if num % 3 == 0:
        # Calculate the cube of the number and add it to the dictionary
        cube = num**3
        cubes_dict[num] = cube

# Print the dictionary of cubes
print(cubes_dict)



# Using dictionary comprehension
cube_dict = {num: num**3 for num in range(1, 100) if num % 3 == 0}
print(cube_dict)
