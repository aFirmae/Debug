# abstract class = a class which contains one or more abstract methods.
# abstract method = a method that has a declaration but does not have an implementation.

# prevents a user from creating an object of that class
# + compels a user to override abstract methods in a child class

import abc # abstract base class module
# can also be done using 'from abc import ABC, abstractmethod' instead of 'import abc'


class Vehicle(abc.ABC):  # abstract class
    @abc.abstractmethod
    def start(self):  # abstract method
        pass

    @abc.abstractmethod
    def stop(self):
        pass


class Car(Vehicle):
    def start(self):
        print("Car is starting")

    def stop(self):
        print("Car is stopping")


class Bike(Vehicle):
    def start(self):
        print("Bike is starting")

    def stop(self):
        print("Bike is stopping")


# vehicle = Vehicle() # TypeError: Can't instantiate abstract class Vehicle with abstract methods start, stop
car = Car()
car.start()
car.stop()

bike = Bike()
bike.start()
bike.stop()
