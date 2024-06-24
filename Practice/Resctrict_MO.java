public class Resctrict_MO {
    public static void main(String[] args) {
        
        Animal a = new Animal();
        a.sound();
        
        Dog d = new Dog();
        d.sound();
    }
}

class Animal {
    final void sound() {
        System.out.println("Animal makes a sound");
    }
}

class Dog extends Animal {
    // This will give an error as final methods cannot be overridden
    void sound() {
        System.out.println("Dog barks");
    }
}