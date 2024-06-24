//Simple Inheritance using  This and Super
import java.util.*;

public class SimpleInheritance {
    public static void main(String[] args) {
        B b = new B(4, 9);
        b.display1();
        b.display2();
    }

}

class A {
    int a;

    A(int a) {
        this.a = a;
    }

    void display1() {
        System.out.println("Square of the number  is " + (a * a));
    }
}

class B extends A {
    int b;

    B(int a, int b) {
        super(a);
        this.b = b;
    }

    void display2() {
        System.out.println("sum of two number is " + (a + b));
    }
}
