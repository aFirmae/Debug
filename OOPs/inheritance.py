# Parent class
class Animal:
    alive = True

    def eat(self):
        print("This animal is eating")

    def sleep(self):
        print("This animal is sleeping")

    def breathe(self):
        print("This animal is breathing")

# Child classes
# Inherits the properties, attributes and methods from the parent class
class Rabbit(Animal):
    def run(self):
        print("This rabbit is running")

class Fish(Animal):
    def swim(self):
        print("This fish is swimming")

class Hawk(Animal):
    def fly(self):
        print("This hawk is flying")

class Dog(Animal):
    def bark(self):
        print("This dog is barking")

# Creating objects
rabbit = Rabbit()
fish = Fish()
hawk = Hawk()
dog = Dog()

# Calling methods from the main class Animal
print(rabbit.alive)
fish.eat()
hawk.sleep()
dog.breathe()

# Calling methods from the child classes
rabbit.run()
fish.swim()
hawk.fly()
dog.bark()
