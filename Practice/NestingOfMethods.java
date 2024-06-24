public class NestingOfMethods {
    public static void main(String[] args) {
        
        Details a = new Details("John Doe", 25, "New York");
        a.details();
    }
}

class Student {
    String name;
    int age;

    Student (String name, int age) {
        this.name = name;
        this.age = age;
    }

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

class Details extends Student {
    String address;

    Details (String name, int age, String address) {
        super(name, age);
        this.address = address;
    }

    String initials(String name) {
        String[] names = name.split(" ");
        String initials = "";
        for (String n : names) {
            initials += n.charAt(0);
        }
        return initials;
    }

    void details() {
        super.display();
        System.out.println("Address: " + address);
        System.out.println("Student initials: " + initials(name)); // Nested method
    }
}
