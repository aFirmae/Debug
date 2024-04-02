import java.util.*;
public class Rm_Dup {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int n = sc.nextInt();
        int[] arr = new int[n];

        input(arr);
        System.out.println("\nBefore removing duplicates: ");
        display(arr);
        arr = removeDuplicates(arr);
        System.out.println("\nAfter removing duplicates: ");
        display(arr);
    }

    public static void input(int[] arr) {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < arr.length; i++) {
            System.out.print("arr[" + i + "] = ");
            arr[i] = sc.nextInt();
        }
    }

    public static void display(int[] arr) {
        System.out.println("The array is: ");
        for (int j = 0; j < arr.length; j++) {
            System.out.print(arr[j] + " ");
        }
        System.out.println();
    }

    public static int[] removeDuplicates(int[] arr) {
        int newSize = arr.length;
        for (int i = 0; i < newSize; i++) {
            for (int j = i + 1; j < newSize; j++) {
                if (arr[i] == arr[j]) {
                    for (int k = j; k < newSize - 1; k++) {
                        arr[k] = arr[k + 1];
                    }
                    newSize--;
                    j--;
                }
            }
        }
        return Arrays.copyOf(arr, newSize);
    }
}
