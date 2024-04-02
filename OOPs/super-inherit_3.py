# super() - used to give access to methods and properties of a parent class.
#           It returns a temporary object of a parent class when used.


class Rectangle:
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        return self.length * self.width


class Square(Rectangle):
    def __init__(self, length, width):
        super().__init__(length, width)  # accessing the __init__() method of Rectangle class


class Cube(Rectangle):
    def __init__(self, length, width, height):
        super().__init__(length, width)  # accessing the __init__() method of Rectangle class
        self.height = height

    def surface_area(self):
        base_area = super().area()  # accessing the area() method of Rectangle class
        return base_area * 6

    def volume(self):
        return super().area() * self.height


# Square:
sq_side = int(input("Enter the side of the square: "))
sq = Square(sq_side, sq_side)
print("Area of the square is: ", sq.area())

# Cube:
cu_side = int(input("Enter the side of the cube: "))
cu = Cube(cu_side, cu_side, cu_side)
print("Surface area of the cube is: ", cu.surface_area())
print("Volume of the cube is: ", cu.volume())

# Cuboid:
cuboid_length = int(input("Enter the length of the cuboid: "))
cuboid_width = int(input("Enter the width of the cuboid: "))
cuboid_height = int(input("Enter the height of the cuboid: "))
cuboid = Cube(cuboid_length, cuboid_width, cuboid_height)
print("Surface area of the cuboid is: ", cuboid.surface_area())
print("Volume of the cuboid is: ", cuboid.volume())
