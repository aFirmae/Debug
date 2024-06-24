import java.io.*;

public class Exception_Types {
    public static void main(String[] args) throws IOException {
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println( 
            """
            1. Arithmetic Exception
            2. Array Index Out Of Bounds Exception
            3. Number Format Exception
            4. String Index Out Of Bounds Exception
            5. Null Pointer Exception
                    """;
        );
        System.out.println("Enter your choice : ");
        int choice = Integer.parseInt(br.readLine());

        switch (choice) {
            case 1:
                try {
                    int a = 10 / 0;
                } catch (ArithmeticException e) {
                    System.out.println("Arithmetic Exception : " + e);
                }
                break;
            case 2:
                try {
                    int[] arr = new int[5];
                    arr[6] = 10;
                } catch (ArrayIndexOutOfBoundsException e) {
                    System.out.println("Array Index Out Of Bounds Exception : " + e);
                }
                break;
            case 3:
                try {
                    int num = Integer.parseInt("abc");
                } catch (NumberFormatException e) {
                    System.out.println("Number Format Exception : " + e);
                }
                break;
            case 4:
                try {
                    String str = "hello";
                    char ch = str.charAt(10);
                } catch (StringIndexOutOfBoundsException e) {
                    System.out.println("String Index Out Of Bounds Exception : " + e);
                }
                break;
            case 5:
                try {
                    String str = null;
                    System.out.println(str.length());
                } catch (NullPointerException e) {
                    System.out.println("Null Pointer Exception : " + e);
                }
                break;
            default:
                System.out.println("Invalid choice");
        }
    }    
}
