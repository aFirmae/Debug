public class Add_Product
{
    public static void main(String[] args)
    {
        int result1 = add(5, 3);
        int result2 = sub(5, 3);
        System.out.println("Addition: " + result1 + " Product: " + result2);
    }
    public static int add(int a, int b)
    {
        return a + b;
    }
    public static int sub(int a, int b)
    {
        return a * b;
    }
}

