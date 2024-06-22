import java.io.*;
import java.util.Scanner;

public class Input {
    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        System.out.println("You entered: " + num);

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter a Integer: ");
        int str = Integer.parseInt(br.readLine());
        System.out.println("You entered: " + str);
    }
}

