import java.util.*;

public class B_Search
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int size, key, s_index;

        System.out.print("Enter the size of the array: ");
        size = sc.nextInt();
        int[] arr = new int[size];

        System.out.println("Enter the elements of the array: ");
        Arr.input(arr, size);
        Arrays.sort(arr);

        System.out.print("Enter the element to be searched: ");
        key = sc.nextInt();
        s_index = Arr.search(arr, key);

        if(s_index != -1)
        {
            System.out.println("Element found");
        }
        else
        {
            System.out.println("Element not found");
        }
    }
}

class Arr
{
    public static Scanner sc = new Scanner(System.in);
    public static void input(int[] arr, int size)
    {
        for (int i = 0; i < size; i++)
        {
            System.out.print("arr[" + i + "] = ");
            arr[i] = sc.nextInt();
        }
    }
    public static void display(int[] arr)
    {
        for(int i = 0; i < arr.length; i++)
        {
            System.out.print("arr[" + i + "] = ");
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
    public static int search(int[] arr, int key)
    {
        int low = 0, high = arr.length - 1, mid;

        while(low <= high)
        {
            mid = (low + high) / 2;
            if(key < arr[mid])
            {
                high = mid - 1;
            }
            else if(key > arr[mid])
            {
                low = mid + 1;
            }
            else
            {
                return mid;
            }
        }
        return -1;
    }
}
