// Write a program to read n number of values in an array and display them in reverse order

import java.util.*;
public class N_Rev
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

        System.out.print("Enter how many elements you want to reverse: ");
        int m = sc.nextInt();

        System.out.println("Original array: ");
        for (int i = 0; i < n; i++)
        {
            System.out.print(arr[i] + " ");
        }

        rev(arr, 0, m - 1);
        System.out.println("\nReversed array: ");
        for (int i = 0; i < n; i++)
        {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void rev(int[] arr, int start, int end)
    {
        while (start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
}