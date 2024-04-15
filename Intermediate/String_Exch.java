package Intermediate;
import java.util.*;

public class String_Exch {
    public static void main(String[] args) {
        String s;
        char ch;
        int pos;

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        s = sc.nextLine();
        System.out.print("Enter the position of the character to be exchanged: ");
        pos = sc.nextInt();
        System.out.print("Enter the character that will replace the character at position " + pos + ": ");
        ch = sc.next().charAt(0);

        try {
            System.out.print("The new string is: " + exchange(s, pos, ch));
        } catch (StringIndexOutOfBoundsException e) {
            System.out.print("Invalid position");
        }
    }

    public static String exchange(String s, int pos, char ch) {
        StringBuilder sb = new StringBuilder(s);
        sb.setCharAt(pos - 1, ch);

        return sb.toString();
    }
}
