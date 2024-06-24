class Own_Exception extends Exception {
    Own_Exception(String s) {
        super(s);
    }
    public static void main(String[] args) {
        int a = 10, b = 3;
        try {
            float quo = (float) a / b;
            if (quo < 1) throw new MyException("Number is very small");
        } 
        catch (MyException e) {
            System.out.println("Caught");
            System.out.println(e.getMessage());
        }
        finally {
            System.out.println("Finally block executed");
        }
    }
}
