
public class MultipleInheritance implements A, B {
    public void show() {
        System.out.println("For interface A and B");
    }

    public void print() {
        System.out.println("For interface B");
    }

    public static void main(String[] args) {
        MultipleInheritance m = new MultipleInheritance();
        m.print();
        m.show();
    }
}

interface A {
    void show();
}

interface B {
    void show();

    void print();

}
