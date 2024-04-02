import math
diameter = float(input("Enter diameter of a circle: "))
perimeter = 2 * math.pi * diameter / 2
area = math.pi * pow(diameter, 2) / 4
print(f"Circumference: {round(perimeter, 3)} cm")
print(f"Area: {round(area, 3)} cm²")
