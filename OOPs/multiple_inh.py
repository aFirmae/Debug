# multiple inheritance: when a derived(child) class inherits from multiple base(parent) classes


class Prey:
    def flee(self):
        print("This prey is fleeing")


class Predator:
    def hunt(self):
        print("This predator is hunting")


class Rabbit(Prey):
    pass


class Hawk(Predator):
    pass


class Fish(Prey, Predator):
    pass


rabbit = Rabbit()
rabbit.flee()  # This prey is fleeing

hawk = Hawk()
hawk.hunt()  # This predator is hunting

fish = Fish()
fish.flee()  # This prey is fleeing
fish.hunt()  # This predator is hunting
