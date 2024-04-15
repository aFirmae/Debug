// First interface
interface Interface1 {
    void method1();
}

// Second interface
interface Interface2 {
    void method2();
}

// First parent class implementing Interface1
class Parent1 implements Interface1 {
    @Override
    public void method1() {
        System.out.println("Method 1 from Parent1");
    }
}

// Second parent class implementing Interface2
class Parent2 implements Interface2 {
    @Override
    public void method2() {
        System.out.println("Method 2 from Parent2");
    }
}

// Child class inheriting from both Parent1 and Parent2
class Child extends Parent1 implements Interface2 {
    Child() {
        super(); // Calls the constructor of Parent1
        System.out.println("Child constructor");
    }

    @Override
    public void method2() {
        System.out.println("Method 2 from Child");
    }
}

public class MultipleInh {
    public static void main(String[] args) {
        Child child = new Child();
        child.method1(); // Method from Parent1
        child.method2(); // Method overridden in Child
    }
}
