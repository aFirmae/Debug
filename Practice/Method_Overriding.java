public class Method_Overriding {
    public static void main(String[] args) {
        
        Animal a = new Animal();
        a.sound();
        
        Dog d = new Dog();
        d.sound();
        
        Cat c = new Cat();
        c.sound();
    }
}

class Animal {
    void sound() {
        System.out.println("Animal makes a sound");
    }
}

class Dog extends Animal {
    void sound() {
        System.out.println("Dog barks");
    }
}

class Cat extends Animal {
    void sound() {
        System.out.println("Cat meows");
    }
}
