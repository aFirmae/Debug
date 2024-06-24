class Method_Overloading {
    public static void main(String[] args) {

        System.out.println("Sum of 2 integers: " + add(10, 20));
        System.out.println("Sum of 3 integers: " + add(10, 20, 30));
        System.out.println("Sum of 2 doubles: " + add(10.5, 20.5));
    }

    public static int add(int a, int b) {
        return a + b;
    }

    public static int add(int a, int b, int c) {
        return a + b + c;
    }

    public static double add(double a, double b) {
        return a + b;
    }
}