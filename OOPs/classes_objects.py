# Classes and Objects in Python
# Class: A class is a blueprint for the object.
# Object: An object is an instance of a class.
# Attributes: Attributes are the properties of the class.
# Methods: Methods are functions defined inside the body of a class. They are used to define the behaviors of an object.

class Car:
    # Class attributes/variables
    # They are shared between all the objects of the class
    # They are defined outside the constructor
    wheels = 4

    # Not needed if __init__(constructor) is defined
    make = None
    model = None
    year = None
    color = None

    # *Class methods
    # Constructor: __init__ is a special method in Python classes, it is known as a constructor in object oriented concepts.
    # This method called when an object is created from the class and it allow the class to initialize the attributes of a class.

    def __init__(self, make, model, year, color):  # self is a reference to the current instance of the class
        # Instance attributes/variables
        # They are not shared between the objects of the class
        self.make = make
        self.model = model
        self.year = year
        self.color = color

    def drive(self):
        print(f"Driving the {self.make}")

    def stop(self):
        print(f"Stopping the {self.make}")

# Changing the class attribute
Car.wheels = 5  # This will change the wheels attribute for all the objects of the class


# *Creating objects of the class

# Object 1
car1 = Car("BMW", "550i", 2016, "Black")
car1.wheels = 6  # This will change the wheels attribute only for this object
print(car1.make)
print(car1.model)
print(car1.year)
print(car1.color)
print(car1.wheels)  # This will print 6 as the wheels attribute is changed for this object
car1.drive()
car1.stop()

# Object 2
car2 = Car("Benz", "E350", 2015, "Silver")
print(car2.make)
print(car2.model)
print(car2.year)
print(car2.color)
print(car2.wheels)  # This will print 5 as the wheels attribute is changed for all the objects of the class
car2.drive()
car2.stop()


# *Another way to create objects of the class, but only if __init__ is not defined
# # Object 1
# car1 = Car()
# car1.make = 'BMW'
# car1.model = '550i'
# car1.year = 2016
# car1.color = 'Black'

# print(car1.make)
# print(car1.model)
# print(car1.year)
# print(car1.color)
# car1.drive()
# car1.stop()

# # Object 2
# car2 = Car()
# car2.make = 'Benz'
# car2.model = 'E350'
# car2.year = 2015
# car2.color = 'Silver'

# print(car2.make)
# print(car2.model)
# print(car2.year)
# print(car2.color)
# car2.drive()
# car2.stop()
