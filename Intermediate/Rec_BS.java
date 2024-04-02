import java.util.*;

public class Rec_BS
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int size, key, s_index;

        System.out.print("Enter the size of the array: ");
        size = sc.nextInt();
        int[] arr = new int[size];

        System.out.println("Enter the elements of the array: ");
        SR.input(arr, size);
        Arrays.sort(arr);

        System.out.print("\nEnter the element to be searched: ");
        key = sc.nextInt();
        s_index = SR.search(arr, 0, arr.length - 1, key);

        if(s_index != -1)
        {
            System.out.println("Element found in array: ");
            SR.display(arr);
        }
        else
        {
            System.out.println("Element not found");
        }
    }
}

class SR
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
            System.out.println(arr[i] + " ");
        }
        System.out.println();
    }
    public static int search(int[] arr, int low, int high, int key)
    {
        int mid = (low + high) / 2;

        if (low <= high) {
            if (mid == key) return mid;
            else {
                if (key < arr[mid]) {
                    return search(arr, low, mid - 1, key);
                }
                else if (key > arr[mid]) {
                    return search(arr, mid + 1, high, key);
                }
            }
        }
        return -1;
    }
}

