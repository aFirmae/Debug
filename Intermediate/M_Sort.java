public class M_Sort
{
    public static void main(String[] args)
    {
        int[] arr = {69, 2, 25, 100, 50, 10};
        M_Sort obj = new M_Sort();
        obj.merge_sort(arr, 0, arr.length - 1);
        for(int i = 0; i < arr.length; i++)
        {
            System.out.print(arr[i] + " ");
        }
    }
    public static void merge(int[] nums, int low, int mid, int high)
    {
        // Set 2 pointers at the start of the 2 divided subarrays.
        int p = low, q = mid + 1;

        /*  Create a new array of size that of all divided subarrays combined.
            An array always has array[0] - array[array.length] + 1
            number of elements.
            Also, initialise an index counter for the new array. */
        int[] newArr = new int[high - low + 1];
        int k = 0;

        // Merge the two subarrays by comparing elements and adding the smaller one to the new array.
        while(p <= mid && q <= high)
        {
            if(nums[p] < nums[q]) newArr[k++] = nums[p++];
            else newArr[k++] = nums[q++];
        }

        /* After merging the subarrays into the new array,
           there may be some elements that are left in the original subarrays.
           So, add those elements to the end of the new array. */
        while(p <= mid) newArr[k++] = nums[p++];
        while(q <= high) newArr[k++] = nums[q++];

        // Copy the sorted elements from the new array back into the original array.
        for(int i = low; i <= high; i++)
        {
            nums[i] = newArr[i - low];
        }
    }
    public static void merge_sort(int[] arr, int low, int high)
    {
        // Calculate the middle index for dividing the array.
        int mid = (low + high) / 2;
        // Base condition where the recursion process ends.
        if(low < high)
        {
            // Divide the array into 2 nearly equal subarrays.
            merge_sort(arr, low, mid);
            merge_sort(arr, mid + 1, high);
            // Merge the divided subarrays while sorting simultaneously.
            merge(arr, low, mid, high);
        }
    }
}