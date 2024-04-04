import java.util.Scanner;

public class Palindrome
{
    public static String reverse(String str)
    {
        for (int i = str.length() - 1; i >= str.length()/2; i--)
        {
            // str = str.substring(0, i) + str.charAt(str.length() - i - 1) + str.substring(i + 1);
            char[] temp = str.toCharArray();
            char t = temp[i];
            temp[i] = temp[str.length() - i - 1];
            temp[str.length() - i - 1] = t;
            str = new String(temp);
        }
        return str;
    }

    public static void main(String args[])
    {
        String str;
        Scanner obj = new Scanner(System.in);
        System.out.print("Enter the string: ");
        str = obj.nextLine();

        String rev = reverse(str);

        if (str.equalsIgnoreCase(rev))
            System.out.println(str + " is palindrome");
        else
            System.out.println(str + " isn't Palindrome");
    }
}
