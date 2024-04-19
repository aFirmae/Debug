import java.util.Arrays;

public class Q_Sort
{
    public static void main(String[] args)
    {
        int[] arr = {180, 165, 170};
        Q_Sort obj = new Q_Sort();
        obj.quickSort(arr, 0, arr.length - 1);
        System.out.println("Sorted Array: " + Arrays.toString(arr));
    }
    
    void quickSort(int[] arr, int low, int high)
    {
        if(low < high)
        {
            int pi = split(arr, low, high);
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }

    int split(int[] arr, int lb, int ub)
    {
        int pivot = arr[lb];
        int p = lb, q = ub;

        while(p < q)
        {
            while(p <= q && arr[p] >= pivot) p++;
            while(p <= q && arr[q] < pivot) q--;
            if(p < q) swap(arr, p, q);
        }
        swap(arr, lb, q);
        return q;
    }

    void swap(int[] arr, int i, int j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}