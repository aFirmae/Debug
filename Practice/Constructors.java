public class Constructors {
    public static void main(String[] args) {
        Person person1 = new Person();
        Person person2 = new Person("Alice", 25);

        System.out.println("Person 1: " + person1.name + ", " + person1.age);
        System.out.println("Person 2: " + person2.name + ", " + person2.age);
    }
}

class Person {
    String name;
    int age;

    // Default constructor
    public Person() {
        name = "John";
        age = 30;
    }

    // Parameterized constructor
    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }
}