import java.util.Scanner;
import java.lang.Math;
public class Sqrt
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        Two obj = new Two();

        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        System.out.println("Square root of " + num + " is " + obj.sqrt(num));
        System.out.println("Actual Square root of " + num + " is " + Math.sqrt(num));
    }
}
class Two
{
    double sqrt(int a)
    {
        double result;
        double temp = 1.0;
        double errTol = 0.000000000001;

        while (true)
        {
            result = (temp + a / temp) / 2;
            if (Math.abs(result - temp) < errTol) break;
            temp = result;
        }
        return result;
    }
}