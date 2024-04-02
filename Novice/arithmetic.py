import math

apples = 10

apples += 1
apples -= 1
apples *= 2
apples /= 2
apples **= 2  # same as pow (apples, 2)
remainder = apples % 3  # remainder is 1
quotient = apples // 3  # quotient is 11  # int(apples/3)

# some math functions
x = 3.14
y = -4
z = 5

x = round(x)  # {round(i, 1)} == {i: .1f}
print(x)

y = abs(y)
print(y)

power = pow(z, y)
print(power)

maximum = max(x, y, z)
print(maximum)

minimum = min(x, y, z)
print(minimum)

pi = math.pi
print(pi)

e = math.e
print(e)

sqrt = math.sqrt(y)
print(sqrt)

ceil = math.ceil(9.1)  # rounded - UP
print(ceil)

floor = math.floor(9.9)  # rounded - DOWN
print(floor)
