def gcd(a, b, smol):
    if a % smol == 0 and b % smol == 0:
        return smol
    else:
        return gcd(a, b, smol - 1)


def lcm(a, b, lorg):
    if lorg % a == 0 and lorg % b == 0:
        return lorg
    else:
        return lcm(a, b, lorg + 1)


x = int(input("Enter 1st number: "))
y = int(input("Enter 2nd number: "))
small = x if x < y else y
large = x if x > y else y
print(f"GCD = {gcd(x, y, small)}")
print(f"LCM = {lcm(x, y, large)}")
