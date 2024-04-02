import java.util.Scanner;
class Func7
{
    int a, b;
    Func7(int a, int b)
    {
        this.a = a;
        this.b = b;
    }
    public static int add(int a, int b)
    {
        return a + b;
    }
    public static int sub(int a, int b)
    {
        return a - b;
    }
    public static int mul(int a, int b)
    {
        return a * b;
    }
    public static double div(int a, int b)
    {
        return (double)a / b;
    }
    public static int rem(int a, int b)
    {
        return a % b;
    }
    public static double pow(int base, int exp)
    {
        if (exp == 0)
        {
            return 1;
        }
        else if (exp == 1)
        {
            return base;
        }
        else
        {
            return base * pow(base, exp - 1);
        }
    }
    public static double log(int num, int base)
    {
        return Math.log(num) / Math.log(base);
    }
}

public class Calc
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("""
                            Enter your choice
                            1. Addition
                            2. Subtraction
                            3. Multiplication
                            4. Division
                            5. Remainder
                            6. Power
                            7. Logarithm
                            8. Exit
                            """);

        System.out.print("\n\nChoice: ");

        int a, b, choice = sc.nextInt();

        switch(choice)
        {
            case 1:
                System.out.print("Enter two numbers: ");
                a = sc.nextInt();
                b = sc.nextInt();
                System.out.println("Sum = " + Func7.add(a, b));
                break;
            case 2:
                System.out.print("Enter two numbers: ");
                a = sc.nextInt();
                b = sc.nextInt();
                System.out.print("Difference = " + Func7.sub(a, b));
                break;
            case 3:
                System.out.print("Enter two numbers: ");
                a = sc.nextInt();
                b = sc.nextInt();
                System.out.println("Product = " + Func7.mul(a, b));
                break;
            case 4:
                System.out.print("Enter two numbers: ");
                a = sc.nextInt();
                b = sc.nextInt();
                System.out.println("Quotient = " + Func7.div(a, b));
                break;
            case 5:
                System.out.print("Enter two numbers: ");
                a = sc.nextInt();
                b = sc.nextInt();
                System.out.println("Remainder = " + Func7.rem(a, b));
                break;
            case 6:
                System.out.print("Enter Base and Exponent: ");
                a = sc.nextInt();
                b = sc.nextInt();
                System.out.println("Power = " + Func7.pow(a, b));
                break;
            case 7:
                System.out.print("Enter the number and base: ");
                a = sc.nextInt();
                b = sc.nextInt();
                System.out.println("Logarithm = " + Func7.log(a, b));
                break;
            case 8:
                System.exit(0);
            default:
                System.out.println("Invalid choice");
        }
    }
}
