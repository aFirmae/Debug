# method chaining: calling multiple methods in a single line


class Prey:
    def flee(self):
        print("This prey is fleeing")


class Predator:
    def hunt(self):
        print("This predator is hunting")


class Rabbit(Prey):
    def flee(self):
        print("This rabbit is fleeing")
        return self


class Hawk(Predator):
    def hunt(self):
        print("This hawk is hunting")
        return self


class Fish(Prey, Predator):
    def flee(self):
        print("This fish is fleeing")
        return self

    def hunt(self):
        print("This fish is hunting")
        return self


rabbit = Rabbit()
rabbit.flee().flee().flee()  # This rabbit is fleeing * 3

hawk = Hawk()
hawk.hunt().hunt().hunt()  # This hawk is hunting * 3

fish = Fish()
fish.flee().hunt().flee().hunt()
# This fish is fleeing
# This fish is hunting
# This fish is fleeing
# This fish is hunting
