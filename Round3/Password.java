import java.util.*;

public class Password 
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter your password: ");
        String s = sc.next();

        System.out.print("Output: ");
        if (checkPassword(s)) System.out.println(0);
        else if (s.length() < 3) System.out.println(6 - s.length());
        else if (s.length() == 4 && noRepeatingChars(s)) System.out.println(3);
        else if (s.length() == 4 && !noRepeatingChars(s)) System.out.println(4);
        else if (s.length() > 5 && s.length() < 7 && noRepeatingChars(s)) System.out.println(2);
        else if (s.length() > 5 && s.length() < 7 && !noRepeatingChars(s)) System.out.println(3);
        else System.out.println(1);
    }

    public static boolean checkPassword(String s) {

        if (s.length() < 6 || s.length() > 20) return false;

        return containsUpper(s) && containsLower(s) && containsDigit(s) && noRepeatingChars(s);
    }

    public static boolean containsUpper(String s) 
    {
        char[] ch = s.toCharArray();

        for (char c = 'A'; c <= 'Z'; c++) {
            
            for (int i = 0; i < ch.length; i++) {

                if (c == ch[i]) return true;
            }
        }
        return false;
    }

    public static boolean containsLower(String s) 
    {
        char[] ch = s.toCharArray();

        for (char c = 'a'; c <= 'z'; c++) {
            
            for (int i = 0; i < ch.length; i++) {

                if (c == ch[i]) return true;
            }
        }
        return false;
    }

    public static boolean containsDigit(String s) 
    {
        char[] ch = s.toCharArray();

        for (char c = '0'; c <= '9'; c++) {
            
            for (int i = 0; i < ch.length; i++) {

                if (c == ch[i]) return true;
            }
        }
        return false;
    }

    public static boolean noRepeatingChars(String s)
    {
        char[] ch = s.toCharArray();

        for (int i = 0; i < ch.length - 2; i++) {

            if (ch[i] == ch[i + 1] && ch[i] == ch[i + 2]) return false;
        }

        return true;
    }

}
