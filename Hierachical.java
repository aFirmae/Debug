//Hierachical inheritance

public class Hierachical {
    public static void main(String[] args) {
        B b = new B(2,6);
        b.print();
        b.print1();
        C c = new C(9,8);
        c.print();
        c.print2();
    }
}


class A{
    int a;
    A(int a)
    {
        this.a = a;
    }
    void print()
    {
        System.out.println("From A "+a);
    }
}
 class B extends A {
    int b,c;
    B(int b, int c)
    {
        super(b);
        this .c = c;
    }
    void print1()
    {
        System.out.println("From B "+c);
    }
 }

 class C extends A{
    int e,f;
    C(int e, int f)
    {
        super(e);
        this .f = f;
    }
    void print2()
    {
        System.out.println("From C "+f);
    }
 }
