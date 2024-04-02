import java.util.Scanner;
public class Abbreviation
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        System.out.println("Abbreviation: " + abbreviate(str));
    }

    public static String abbreviate(String str)
    {
        int i = 0;
        String result = String.valueOf(str.charAt(0));
        while (str.length() > 0 && i < str.length())
        {
            if (str.charAt(i) == ' ')
            {
                result += str.charAt(i + 1);
            }
            i++;
        }
        return result;
    }
}
