import java.util.Scanner;
class Func8
{
    int x, y, z;
    Func8(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }

    int max()
    {
        return (x > y && x > z) ? x : (y > x && y > z) ? y : z;
    }

    int min()
    {
        return (x < y && x < z) ? x : (y < x && y < z) ? y : z;
    }

    void display()
    {
        System.out.println("Max: " + max());
        System.out.println("Min: " + min());
    }
}
public class Min_Max
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter 3 numbers: ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        Func8 obj = new Func8(a, b, c);
        obj.display();
    }
}

