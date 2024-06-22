public class Constructor {
    public static void main(String[] args) {

        Person per;
        per = new Person("Rouymadip Patra", 21);
        per.display();
    }
}

class Person {

    String name;
    int age;

    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    void display() {
        System.out.println("Name: " + name + " Age: " + age);
    }
}
