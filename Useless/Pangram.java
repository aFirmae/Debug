import java.util.*;
public class Pangram
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        System.out.println("Is pangram: " + isPangram(str));
    }
    public static boolean isPangram(String str)
    {
        Set<Character> set = new HashSet<>();
        for (int i = 0; i < str.length(); i++) {
            char c = Character.toLowerCase(str.charAt(i));
            if (c >= 'a' && c <= 'z') {
                set.add(c);
            }
        }
        return set.size() == 26;
    }
}
