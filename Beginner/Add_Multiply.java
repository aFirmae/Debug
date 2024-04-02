import java.util.*;
class Func0
{
    int x, y;
    Func0(int x, int y)
    {
        this.x = x;
        this.y = y;
    }
    void add()
    {
        System.out.println("Addition: " + (x + y));
    }
    void multiply()
    {
        System.out.println("Product: " + (x * y));
    }
}

public class Add_Multiply
{
    public static void main(String[] args)
    {
        int a, b;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter two numbers: ");
        a = sc.nextInt();
        b = sc.nextInt();

        Func0 obj = new Func0(a, b);
        obj.add();
        obj.multiply();
    }
}
