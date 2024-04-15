import java.util.*;
public class Remove_lead_zero
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter the number: ");
        String num = sc.nextLine();

        System.out.println("Number without leading zeroes: " + removeLeadingZeros(num));
    }
    public static String removeLeadingZeros(String num)
    {
        String result = "";
        int i = 0;

        while (i < num.length() && num.charAt(i) == '0') i++;

        while (i < num.length()) result += num.charAt(i++);

        return result;
    }
}
