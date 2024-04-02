temp = float(input("Temperature: "))
print("Press 1 for Celsius to Fahrenheits.")
print("Press 2 for Fahrenheits to Celsius.")
unit = input("1 or 2 : ")
if unit == "1":
    print(f"{temp}°C = {round((temp * 1.8) + 32, 2)}°F")
elif unit == "2":
    print(f"{temp}°F = {round(((temp - 32) * 5) / 9, 2)}°C")
else:
    print(f"{unit} is Invalid!!")
