# sort() method   = used with lists
# sort() function = used with iterables (including lists, tuples, dictionaries, etc.)

fruits = ["grape", "raspberry", "apple", "banana"]
fruits.sort()
fruits.sort(reverse=True)  # sorts in reverse order
print(fruits)  # ['apple', 'banana', 'grape', 'raspberry']

fruits = ("grape", "raspberry", "apple", "banana")
sorted_fruits = sorted(fruits)  # sorted() returns a new sorted list
sorted_fruits = sorted(fruits, reverse=True)  # sorts in reverse order
print(sorted_fruits)  # ['apple', 'banana', 'grape', 'raspberry']


# *sort() method and sorted() function can take a key argument to specify a function to be called on each list element prior to making comparisons.
# *The value of the key parameter should be a function that takes a single argument and returns a key to use for sorting purposes.

# ---- EXAMPLE 1 ----
students = {
    1: "Raj",
    2: "Rohan",
    3: "Pooja",
    4: "Rahul",
    5: "Rajesh",
    6: "Sunny",
}  # dictionary of roll numbers and their students

# sort by roll number
sorted_students = sorted(students.items(), key=lambda roll_nos: roll_nos[0])  # x[0] is the roll number (This is default)

# sort by student name
sorted_students = sorted(students.items(), key=lambda names: names[1])  # x[1] is the student name

# sort by roll number in descending order
sorted_students = sorted(students.items(), key=lambda roll_nos: roll_nos[0], reverse=True)

# sort by student name in descending order
sorted_students = sorted(students.items(), key=lambda names: names[1], reverse=True)

# ?But its better to use Tuple/List instead of Dictionary i.e.; tuple of tuples or tuple of lists or vice versas
# ?So, we can use the same code as above much more easily, here's how:

# ---- EXAMPLE 2 ----
students = (
    ("Raj", 1, 62),
    ("Rohan", 2, 41),
    ("Pooja", 3, 89),
    ("Rahul", 4, 69),
    ("Rajesh", 5, 82),
    ("Sunny", 6, 48),
)  # tuple of student names, their roll numbers and their marks

# !As tuples are immutable, we can't use the sort() method, so we use the sorted() function instead.
# sort by roll number
sorted_students = sorted(students, key=lambda roll_nos: roll_nos[1])  # x[1] is the roll number

# sort by student name
sorted_students = sorted(students, key=lambda names: names[0])  # x[0] is the student name (This is default)

# sort by marks
sorted_students = sorted(students, key=lambda marks: marks[2])  # x[2] is the marks


# ---- EXAMPLE 3 ----
students = [
    ["Raj", 1, 62],
    ["Rohan", 2, 41],
    ["Pooja", 3, 89],
    ["Rahul", 4, 69],
    ["Rajesh", 5, 82],
    ["Sunny", 6, 48],
]

# !As mentioned earlier, lists are mutable, so we can use the sort() method to sort the list in place.
# sort by roll number
students.sort(key=lambda roll_nos: roll_nos[1])  # x[1] is the roll number

# sort by student name
students.sort(key=lambda names: names[0])  # x[0] is the student name (This is default)

# sort by marks
students.sort(key=lambda marks: marks[2])  # x[2] is the marks



# ---- EXERCISE ----
# Sort the given list in ascending order based on the digits in their ones place.
list = [21, 34, 65, 92, 27, 50, 18, 49, 93, 56]
# Expected Output: [50, 21, 92, 93, 34, 65, 56, 27, 18, 49]
list.sort(key=lambda x:str(x)[1])
print(list)


# ---- EXERCISE ----
# Sort the given tuple in ascending order based on the digits in their tens place.
tuple = (21, 34, 65, 92, 27, 50, 18, 49, 93, 56)
# Expected Output: (18, 21, 27, 34, 49, 50, 56, 65, 92, 93)
sorted_tuple = sorted(tuple, key=lambda x:str(x)[0])
print(sorted_tuple)
