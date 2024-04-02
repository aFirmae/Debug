class Organism {
    boolean alive  = true;
}

class Animal extends Organism {
    String name;
    public Animal(String name) {
        super();
        this.name = name;
    }
    public void eat() {
        System.out.println(this.name + " is eating");
    }
    public void sleep() {
        System.out.println(this.name + " is sleeping");
    }
}

class Dog extends Animal {
    public Dog(String name) {
        super(name);
    }
    public void bark() {
        System.out.println(this.name + " is barking");
    }
}

public class Inherit2 {
    public static void main(String[] args) {
        Dog dog = new Dog("Buddy");
        System.out.println(dog.alive);  // True
        dog.eat();  // Buddy is eating
        dog.sleep();  // Buddy is sleeping
        dog.bark();  // Buddy is barking
    }
}