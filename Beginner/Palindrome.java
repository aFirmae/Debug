import java.util.Scanner;

public class Palindrome
{
    String reverse(String str)
    {
        String rev = "";
        for (int i = str.length() - 1; i >= 0; i--)
        {
            rev += str.charAt(i);
        }
        return rev;
    }

    public static void main(String args[])
    {
        String str;
        Scanner obj = new Scanner(System.in);
        System.out.println("Enter the string");
        str = obj.nextLine();

        Palindrome obj1 = new Palindrome();
        String rev = obj1.reverse(str);

        if (str == rev)
            System.out.println(str + " is palindrome");
        else
            System.out.println(str + " isn't Palindrome");
    }
}
