import java.io.*;

public class Array
{
    public static void main(String[] args)throws IOException
    {
        int size, sum = 0;
        InputStreamReader read = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(read);
        System.out.print("Enter the size of the array: ");
        size = Integer.parseInt(br.readLine());

        int[] arr = new int[size];
        System.out.println("Enter the elements of the array: ");
        for(int i = 0; i < size; i++)
        {
            System.out.print("arr[" + i + "] = ");
            arr[i] = Integer.parseInt(br.readLine());
            sum += arr[i];
        }

        System.out.println("Sum of array elements = " + sum);
    }
}
