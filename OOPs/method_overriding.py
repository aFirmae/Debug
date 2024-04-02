# method overriding/redefinition: same method name in both parent and child class
# method overriding is used to change the behavior of the parent class method in the child class
# method signature: method name + parameters


class Prey:
    def flee(self):
        print("This prey is fleeing")


class Predator:
    def hunt(self):
        print("This predator is hunting")


class Rabbit(Prey):
    def flee(self):  # method overriding (same method signature as parent class)
        print("This rabbit is fleeing")


class Hawk(Predator):
    def hunt(self):  # method overriding (same method signature as parent class)
        print("This hawk is hunting")


class Fish(Prey, Predator):
    def flee(self):  # method overriding (same method signature as parent class)
        print("This fish is fleeing")

    def hunt(self):  # method overriding (same method signature as parent class)
        print("This fish is hunting")


rabbit = Rabbit()
rabbit.flee()  # This rabbit is fleeing

hawk = Hawk()
hawk.hunt()  # This hawk is hunting

fish = Fish()
fish.flee()  # This fish is fleeing
fish.hunt()  # This fish is hunting
