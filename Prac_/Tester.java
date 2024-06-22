public class Tester {
    public static void main(String[] args) {

        Demo d1, d2;
        d1 = new Demo();
        d2 = new Demo();

        d1.x++;
        d1.display();
        d2.display();
    }
}
class Demo {
    int x = 10;
    void display() {
        System.out.println(x);
    }
}
