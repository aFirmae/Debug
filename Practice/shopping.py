item = input("What item would ya like to buy: ")
price = float(input("What is the price? - "))
quantity = int(input("How many would you like: "))

total = price * quantity  # implicit float typecasting
print(f"You have bought {quantity} x {item}")
print(f"Total amount payable: ${round(total, 2)}")
