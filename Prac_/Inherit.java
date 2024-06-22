public class Inherit {
    public static void main(String[] args) {
        
        Volume v = new Volume(10, 20, 30);

        System.out.println("Area1: " + v.area());
        System.out.println("Volume: " + v.volume());
    }
}

class Shapes {
    int a, b;
    Shapes (int a, int b) {
        this.a = a;
        this.b = b;
    }
}

class Area1 extends Shapes {
    Area1 (int a, int b) {
        super(a, b);
    }
    protected int area() {
        return a * b;
    }
}

class Volume extends Area1 {
    int h;
    Volume (int a, int b, int h) {
        super(a, b);
        this.h = h;
    }
    int volume() {
        return super.area() * h;
    }
}
