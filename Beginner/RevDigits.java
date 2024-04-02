import java.util.Scanner;
class Func2
{
    void revDigits(int data)
    {
        while (data != 0)
        {
            System.out.print(data % 10 + " ");
            data /= 10;
        }
    }
}

public class RevDigits
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        Func2 fn = new Func2();
        System.out.println("The digits of " + num + " in reverse order are: ");
        fn.revDigits(num);
    }
}
