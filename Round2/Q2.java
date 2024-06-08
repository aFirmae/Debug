import java.util.*;

public class Q2 {

    public static void main(String[] args) {

        Scanner scan = new Scanner (System.in);
        System.out.print("Enter a number: ");
        int num = scan.nextInt();

        System.out.println("The number is: " + findPalin(num));
    }

    public static int reverse(int num) {

        int copy = num, rev = 0;
        while (copy > 0 ) {
            int rem = copy % 10;
            rev = rev * 10 + rem;
            copy /= 10;
        }
        return rev;
    }

    public static int findPalin(int num) {

        if (num == reverse(num)) return num;

        while (num != reverse(num)) {
            num += reverse(num);
        }

        return num;
    }
    
}
