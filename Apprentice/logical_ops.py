#  Logical operators
#  logical operators = used on conditional statements

#              and = checks two or more conditions are True
#               or = checks if at least one condition is True
#               not = True if condition is False, and vice-versa

temp = int(input("Enter your body temperature: "))
if temp < 35:
    print(f"No human has {temp}°C as a temperature.")
elif 35 <= temp < 38:
    print(f"Yeah, {temp}°C is optimal body-temperature.")
elif 38 <= temp <= 45:
    print(f"That's Fever!! {temp}°C is Fever.")
elif temp > 90:
    print("Only °C is allowed. Refrain from °F")
else:
    print(f"We know, your temperature is not {temp}°C")
    print("If it is, why you still alive!")
