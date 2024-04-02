import java.util.*;
class Func3
{
    public static int fact(int n)
    {
        int f = 1;
        for(int i = 1; i <= n; i++)
        {
            f *= i;
        }
        return f;
    }
    public static void isSpecial(int n)
    {
        int sum = 0;
        int temp = n;
        while(temp > 0)
        {
            int r = temp % 10;
            sum += fact(r);
            temp /= 10;
        }
        if(sum == n)
        {
            System.out.println("Special Number");
        }
        else
        {
            System.out.println("Not a Special Number");
        }
    }
}

public class Special
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number");
        int num = sc.nextInt();
        Func3.isSpecial(num);
    }
}
