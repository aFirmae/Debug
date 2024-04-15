import java.util.*;

public class Solution {
    
    public static void main(String[] args) {

        int[] arr = new int[] {32, 45, 67, 24, 32, 24, 45};
        System.out.println("Original Array: " + Arrays.toString(arr));

        System.out.println("Array with duplicates removed: " + Arrays.toString(rmDup(arr)));
    }

    public static int[] rmDup(int[] nums) {

        int i = 0;
        int[] res = new int[nums.length];

        for (int num : nums) {
            if (!contains(res, num)) res[i++] = num;
        }

        return Arrays.copyOf(res, i);
    }

    public static boolean contains(int[] arr, int target) {

        for (int num : arr) {
            if (num == target) return true;
        }
        return false;
    }
}