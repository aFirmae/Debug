public class Compulsory_MO {
    public static void main(String[] args) {
        
        Animal a = new Dog();
        a.sound();
    }
}

abstract class Animal {
    
    abstract void sound();
}

class Dog extends Animal {

    // abstract methods needs to be defined in the subclass
    void sound() {
        System.out.println("Dog barks");
    }
}
