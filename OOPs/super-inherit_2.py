class Animal:
    # Class attribute
    def __init__(self, name):  # Constructor
        self.name = name

    def eat(self):
        print(f"{self.name} is eating")

    def sleep(self):
        print(f"{self.name} is sleeping")


class Dog(Animal):
    def __init__(self, name, breed):
        super().__init__(name)  # Calling the parent class constructor
        self.breed = breed  # Adding an attribute

    def bark(self):
        print(f"{self.name} (a {self.breed} dog) is barking")


class Cat(Animal):
    def __init__(self, name, color):
        super().__init__(name)  # Calling the parent class constructor
        self.color = color  # Adding an attribute

    def purr(self):
        print(f"{self.name} (a {self.color} cat) is purring")


# Creating objects
dog = Dog("Buddy", "Labrador Retriever")
cat = Cat("Whiskers", "Orange")

# Accessing and calling methods
dog.eat()  # Buddy is eating
dog.sleep()  # Buddy is sleeping
dog.bark()  # Buddy (a Labrador Retriever dog) is barking

cat.eat()  # Whiskers is eating
cat.sleep()  # Whiskers is sleeping
cat.purr()  # Whiskers (a Orange cat) is purring
