adjective1 = input("Enter an adjective - ")
noun = input("Enter a noun - ")
adjective2 = input("Enter another adjective - ")
verb = input("Enter a verb - ")
adjective3 = input("Enter another adjective - ")

if verb[-1] == "e":
    verb = verb[:-1] + "ing"
else:
    verb += "ing"

print("\n")
print(f"Today I went to a {adjective1} zoo")
print(f"In an exhibit, I saw {noun}")
print(f"{noun.capitalize()} was {adjective2} and {verb}")
print(f"I was {adjective3}")
