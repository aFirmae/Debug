# Python: Objects as Arguments and Duck Typing


class Car:
    color = "black"  # default value


class Bike:
    color = "grey"  # default value


def change_color(vehicle, color):  # function to change the color of a vehicle
    vehicle.color = color  # change the color of the vehicle


# Due to the fact that the color attribute is defined in both classes,
# we can use the same function to change the color of both objects.
my_car = Car()
change_color(my_car, "red")  # object my_car is passed as an argument
# can also use: my_car.color = "red"
print(my_car.color)  # red

my_bike = Bike()
change_color(my_bike, "blue")  # object my_bike is passed as an argument
# can also use: my_bike.color = "blue"
print(my_bike.color)  # blue


# *Duck Typing
# Python uses duck typing, which means that the type or the class of an object is less important than the methods it defines.
# Class type is not checked if minimum methods/attributes are present
# ?“If it walks like a duck, and it quacks like a duck, then it must be a duck.”

# For example, if we have a function that takes a vehicle object as an argument,
# It doesn't matter if the object is a car or a bike, as long as it has a color attribute and a change_color() method.
# This is why we can use the same function to change the color of both objects.


# Another example:
class Parrot:
    def fly(self):
        print("Parrot can fly")

    def swim(self):
        print("Parrot can't swim")


class Penguin:
    def fly(self):
        print("Penguin can't fly")

    def swim(self):
        print("Penguin can swim")


# common interface
# using duck typing
class Bird:
    def flying_test(self, bird):  # bird is an object passed as an argument
        bird.fly()

    def swimming_test(self, bird):  # passing the object bird as an argument
        bird.swim()


# instantiate objects
blu = Parrot()
peggy = Penguin()

# passing the object
bird = Bird()
bird.flying_test(blu)  # Parrot can fly
bird.swimming_test(blu)  # Parrot can't swim
bird.flying_test(peggy)  # Penguin can't fly
bird.swimming_test(peggy)  # Penguin can swim
