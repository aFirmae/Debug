public class This_Super {
    public static void main(String[] args) {
        
        Sum s = new Sum(5, 6);
        System.out.println("Square of 5: " + s.sqr());
        System.out.println("Sum of 5 and 6: " + s.add());
    }
}

class Square {
    int a;

    Square(int side) {
        this.a = a;
    }

    int sqr() {
        return a * a;
    }
}

class Sum extends Square {
    int b;

    Sum(int a, int b) {
        super(a);
        this.side2 = b;
    }

    int add() {
        return a + b;
    }
}
