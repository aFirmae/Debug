import java.util.*;
public class Exceptions 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        System.out.println(
                """
                        1. Array index out of bounds exception
                        2. Arithmetic exception
                        3. String index out of bounds exception
                        4. Input mismatch exception
                """);

        System.out.print("Enter your choice: ");
        int a = sc.nextInt();
        switch (a)
        {
            case 1:
                try 
                {
                    System.out.print("Enter an array size: ");
                    int b = sc.nextInt();
                    int[] arr = new int[b];
                    System.out.print("Enter an index: ");
                    int index = sc.nextInt();
                    System.out.println("Element at index " + index + " is available");
                } 
                catch (ArrayIndexOutOfBoundsException e) 
                {
                    System.out.println("Array index out of bounds");
                }
                break;
            case 2:
                try 
                {
                    System.out.print("Enter a number: ");
                    int b = sc.nextInt();
                    System.out.print("Enter a number to divide by: ");
                    int c = sc.nextInt();
                    double k = b / c;
                    System.out.println("Result: " + k);
                }
                catch (ArithmeticException e) 
                {
                    System.out.println("Arithmetic exception");
                }
                break;
            case 3:
                try 
                {
                    System.out.print("Enter a string: ");
                    String str = sc.nextLine();
                    str = sc.nextLine();
                    System.out.print("Enter an index: ");
                    int index = sc.nextInt();
                    System.out.println("Character at index " + index + " is " + str.charAt(index));
                } 
                catch (StringIndexOutOfBoundsException e) 
                {
                    System.out.println("String index out of bounds");
                }
                break;
            case 4:
                try 
                {
                    System.out.print("Enter a number: ");
                    int b = sc.nextInt();
                    System.out.println("You entered: " + b);
                } 
                catch (InputMismatchException e) 
                {
                    System.out.println("Input mismatch exception");
                }
                break;
            default:
                System.out.println("No other exceptions available");
        }
    }
}