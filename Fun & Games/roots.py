print("Quadratic Equation Solver")
print("Enter coefficients of ax²+bx+c=0.")
a = float(input("a = "))
b = float(input("b = "))
c = float(input("c = "))

none = ""

dis = b**2 - 4 * a * c
print(f"Discriminant: {dis}")
if dis == 0:
    root1 = (-b + dis**0.5) / (2 * a)
    root2 = (-b - dis**0.5) / (2 * a)
    print(f"Roots: {round(root1, 2)}, {round(root2, 2)}")  # {root1: .2f}
elif dis > 0:
    root1 = (-b + dis**0.5) / (2 * a)
    root2 = (-b - dis**0.5) / (2 * a)
    print(f"Roots: {round(root1, 2)}, {round(root2, 2)}")
elif dis < 0:
    real = -b / (2 * a)
    img = ((-dis) ** 0.5) / (2 * a)
    print(f"Roots: {round(real, 2) if real != 0 else none} ± {round(img, 2)}i")

print(f"Sum of roots: {-b / a if real != 0 else 0}")
print(f"Product of roots: {c / a:.2f}")
