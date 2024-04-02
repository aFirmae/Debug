import java.io.*;
class Func1
{
    boolean isPerfect(int data)
    {
        int sum = 0;
        for (int i = 1; i <= data / 2; i++)
        {
            if (data % i == 0)
            {
                sum += i;
            }
        }
        return sum == data;
    }
}

public class Perfect
{
    public static void main(String[] args) throws IOException
    {
        int num;
        InputStreamReader read = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(read);

        System.out.print("Enter a number: ");
        num = Integer.parseInt(br.readLine());

        Func1 fn = new Func1();
        if (fn.isPerfect(num))
        {
            System.out.println(num + " is a Perfect Number.");
        }
        else
        {
            System.out.println(num + " is not a Perfect Number.");
        }
    }
}
