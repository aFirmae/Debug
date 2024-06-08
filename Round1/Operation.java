//Set-5 Question 2
import java.util.Scanner;
public class Operation{
    public static void main(String []args)
    {
        int x=0;
        Scanner in=new Scanner(System.in);
        System.out.println("Enter array Size");
        int size=in.nextInt();
        String []s=new String[size];
        for(int i=0;i<size;i++)
        {
            s[i]=in.nextLine();
        }
        for(int i=0;i<size;i++)
        {
            String s_i=s[i];
            x=calculate(s_i,x);
        }
        System.out.println(x);
    }
    public static int calculate(String s,int x)
    {
        if (s=="++X"){
            ++x;
        }
        else if (s=="X++"){
            x++;
        }
        if (s=="--X"){
            --x;
        }
        if (s=="X--"){
            x--;
        }
        return x;
    }
}