num1 = float(input("Enter 1st number: "))
num2 = float(input("Enter 2nd number: "))
op = input("Enter mode of operation: ")

if op == '+':
	print(f"Sum = {num1 + num2}")
elif op == '-':
	if num2 > num1:
		num1 += num2
		num2 = num1 - num2
		num1 -= num2
	print(f"Difference = {num1 - num2}")
elif op == '*':
	print(f"Product = {num1 * num2}")
elif op == '/':
	if not num2:
		print("Can't divide by Zero.")
	else:
		print(f"Quotient (1st / 2nd) = {round(num1 / num2, 3)}")
elif op == '%':
	print(f"Remainder = {num1 % num2}")
else:
	print(f"{op} isn't a valid operator!")
