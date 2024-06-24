//Multilevel inheritance

public class Multilevel {
    public static void main(String[] args) {
        C c = new C(10, 15, 20);
        c.display1();
        c.display2();
        c.display3();
    }
}

class A {
    int a;

    A(int a) {
        this.a = a;
    }

    void display1() {
        System.out.println("From Class A " + a);
    }
}

class B extends A {
    int b, c;

    B(int b, int c) {
        super(b);
        this.b = b;
        this.c = c;
    }

    void display2() {
        System.out.println("From B " + (c + b));
    }
}

class C extends B {
    int f;

    C(int d, int e, int f) {
        super(d, e);
        this.f = f;
    }

    void display3() {
        System.out.println("From class C " + (b * c * f));
    }
}