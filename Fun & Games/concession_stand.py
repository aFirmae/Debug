# Concession stand program
# Dictionary practice

menu = {
    "Pizza": 3.00,
    "Nachos": 4.50,
    "Popcorn": 6.00,
    "Fries": 2.50,
    "Chips": 1.00,
    "Pretzel": 3.50,
    "Soda": 3.00,
    "Lemonade": 4.25,
}

cart = list()  # can also use [] instead of list()
total = i = 0

print("--------- MENU ---------")
for key, value in menu.items():
    print(f"{i + 1}. {key:14}: ${value:.2f}")
    i += 1
print("------------------------")

i = 0
print("Enter your items. Press Enter to quit.")
while True:
    food = input(f"{i + 1}. ")
    if food == "":
        break
    elif food.capitalize() in menu.keys():           # -----> Myself
        cart.append(food)
    # elif menu.get(food.capitalize()) is not None:  # -----> YouTube
    #     cart.append(food)
    # elif food.capitalize() in menu:                # -----> ChatGPT
    #     cart.append(food)
    i += 1

i = 0
print("------ YOUR ORDER ------")
if len(cart) == 0:
    print("Your cart is empty. :(")
else:
    for food in cart:
        price = menu.get(food.capitalize())
        print(f"{i + 1}. {food.capitalize():<14} ${price:.2f}")
        total += price  # type: ignore
        i += 1

print("------------------------")

print(f"Total is: ${total:.2f}\n")
