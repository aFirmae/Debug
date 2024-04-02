# Shopping Cart

foods = []
prices = []
quantities = []
total = 0

print("Enter your food products. Press Enter to quit. ")
i = 1
while True:
    food = input(f"{i}. ")
    if food == "":
        break
    else:
        price = float(input(f"Price of {food}: "))
        quantity = int(input(f"Quantity of {food}: "))
        foods.append(food)
        prices.append(price)
        quantities.append(quantity)
        i += 1

print("---------- YOUR CART ----------")

i = 1
if len(foods) == 0:
    text = "Your cart is empty."
    print(f"{text:>19}")
else:
    for food in foods:
        price = prices[i - 1]
        quantity = quantities[i - 1]
        print(f"{i}. {quantity:02} x {food.capitalize():16}₹{price * quantity: .2f}")
        total += price * quantity
        i += 1

print("-------------------------------")

if not len(foods) == 0:
    print(f"Your total is: ₹{total}")
