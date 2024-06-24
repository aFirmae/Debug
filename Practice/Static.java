public class Static {
    public static void main(String[] args) {
        
        StaticExample s1 = new StaticExample();
        StaticExample s2 = new StaticExample();
        StaticExample s3 = new StaticExample();
        
        StaticExample.display(); // Static method can be called without creating an object of the class
        // Output → Count: 3
    }
}

class StaticExample {
    
    static int count = 0; // Static variable is shared among all objects of the class
    
    StaticExample() {
        count++;
    }

    public static void display() {
        System.out.println("Count: " + count);
    }
}
