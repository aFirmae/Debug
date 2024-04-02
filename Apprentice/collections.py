# Collections: Single variable used to store multiple values.
#   List  = [ ] ordered and changeable(mutable). Duplicates are OK
#   Set   = { } unordered and immutable, but Add/Remove OK. NO duplicates
#   Tuple = ( ) ordered and immutable. Duplicates are OK. FASTER

# # 1. Lists
cars = ["Mercedes", "Audi", "Bugatti", "Ferrari"]
# print(dir(cars))  ---> Prints all attributes & methods we can do with the collection
# print(help(cars)) ----> Prints the description of methods. It clearly HELPS!!
print(len(cars))  # ---> Returns the number of elements in a collection
print(cars)
print(cars[0])  # ---> Returns the element at the specified index
print(cars[:3])  # ---> Returns the elements from index 0 to 2
print(cars[::2]) # ---> Returns the elements from index 0 to the end, with a step of 2
print(cars[1::2]) # ---> Returns the elements from index 1 to the end, with a step of 2
print(cars[::-1]) # ---> Returns the elements from the end to the beginning, with a step of 1

print("Audi" in cars)  # ----> Returns True
print("Porsche" in cars)  # ----> Returns False

for a_car in reversed(cars[::-1]):  # Fancyyyy
   print(a_car)

# Lists are changeable after they are declared
cars[0] = "Ford Mustang"
print(cars)

# Some Methods used in Lists
cars.append("Lamborghini") # Adds to the end of the list
print(cars)

cars.remove("Bugatti")
print(cars)

cars.insert(0, "Bugatti") # Inserts at the specified index
print(cars)

cars.sort()
print(cars)

cars.reverse()  # Same as ---> print(cars[::-1])
print(cars)

index = cars.index("Audi")
print(index)

count = cars.count("Ferrari") # Returns the number of times the element is present in the list
print(count)

cars.clear()  # Same as ----> print(cars[0:0])
print(cars)


# 2. Sets
fruits = {"apples", "bananas", "grapes", "mangoes"}
print("grapes" in fruits)
fruits.add("pineapples")
fruits.remove("apples")
fruits.pop()  # removes the first element at random
fruits.clear()
print(fruits)

# 3. Tuples
people = ("Mark", "Bill", "Derek", "Martha")
print(len(people))  # ---> Returns the number of elements in a collection
print("Bill" in people)  # ---> Returns True

# Only 2 methods in Tuples
print(people.index("Derek"))
print(people.count("Martha"))
print(people)


# dictionary =  a collection of {key:value} pairs
#               ordered and changeable. No duplicates

capitals = {"USA": "Washington D.C.",
            "India": "New Delhi",
            "China": "Beijing",
            "Russia": "Moscow"}

# print(dir(capitals))
# print(help(capitals))

print(capitals["India"])
print(capitals["USA"])
print(capitals["China"])
# print(capitals["Japan"]) # ----> Throws an error if the key doesn't exist

# We can also use the get() method to get the value of a key
print(capitals.get("India"))
print(capitals.get("USA"))
print(capitals.get("Japan")) # ----> Returns None
print(capitals.get("Japan", "That capital doesn't exist")) # ----> Returns the default value if the key doesn't exist


if capitals.get("Russia"):
   print("That capital exists")
else:
   print("That capital doesn't exist")

# Another way to check if a key exists
if "Russia" in capitals:
   print("That capital exists")
else:
   print("That capital doesn't exist")


capitals.update({"Germany": "Hamburg"}) # ----> Updates / Inserts a new {key:value} pair
capitals.update({"Germany": "Berlin"}) # ----> Updates / Changes an existing {key:value} pair

capitals.pop("China")  # ----> Removes the {key:value} pair whose key is "China"
capitals.popitem() # ----> removes the last {key:value} pair

# capitals.clear() # ----> Yeh, you know what this does!!

# print just the keys in the {key:value} pairs
keys = capitals.keys()
print(keys)
for key in keys:
   print(key)

# print just the values in the {key:value} pairs
values = capitals.values()
print(values)
for value in values:
   print(values)

# print all the {key:value} pairs
items = capitals.items()
for key, value in items:
   print(f"{key}: {value}")

print(capitals)


# Another example (all me)

continents = {
    "Asia": "India",
    "NA" : "USA",
    "SA" : "Brazil",
    "EU" : "United Kingdom"
}

continents.update({"Australia":"Sydeny"})

# Way to print the key part of {key: value} pairs. 

for country in continents.keys():
   print(country)

for country in continents:   # .keys() is default
   print(country)