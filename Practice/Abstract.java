public class Abstract {
    public static void main(String[] args) {
        
        Circle c = new Circle();
        c.draw();
        c.display();
    }
}

abstract class Shape {
    
    abstract void draw();

    void display() {
        System.out.println("Displaying shape");
    }
}

class Circle extends Shape {

    void draw() {
        System.out.println("Drawing circle");
    }

    @Override
    void display() {
        System.out.println("Displaying circle");
    }
}
