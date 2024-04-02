import java.util.*;
public class Remove_lead_zero
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number");
        String num = sc.nextLine();
        System.out.println("Number without leading zeroes: " + removeLeadingZeros(num));
    }
    public static String removeLeadingZeros(String num)
    {
        String result = "";
        boolean  flag = false;
        for (int i = 0; i < num.length(); i++)
        {
            if (num.charAt(i) != '0' || flag)
            {
                result += num.charAt(i);
                if (num.charAt(i) != '0') flag = true;
            }
        }
        return result;
    }
}
