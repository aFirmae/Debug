import java.util.*;
public class Frequency 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int n = sc.nextInt();
        int[] arr = new int[n];

        System.out.println("Enter the elements: ");
        for (int i = 0; i < n; i++) 
        {
            System.out.print("arr[" + i + "]" + ": ");
            arr[i] = sc.nextInt();
        }
        System.out.println("\nThe frequency of each element is: ");
        freq(arr, n);
    }
    public static void freq(int[] arr, int n)
    {
        int[] freq = new int[n];
        int visited = -1;
        for (int i = 0; i < n; i++)
        {
            int count = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    freq[j] = visited;
                }
            }
            if (freq[i] != visited)
            {
                freq[i] = count;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (freq[i] != visited)
            {
                System.out.println(arr[i] + " occurs " + freq[i] + " times");
            }
        }
    }
}
