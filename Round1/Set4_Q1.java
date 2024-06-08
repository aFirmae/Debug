// Set 4 : Question 1

import java.util.*;

public class Set4_Q1 
{
    public static void main(String[] args) {
        
        int[] nums = {};
        int key = 5;

        System.out.println(Arrays.toString(search(nums, key)));
    }

    public static int[] search(int[] arr, int key)
    {
        Arrays.sort(arr);

        ArrayList<Integer> list = new ArrayList<>();

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == key) list.add(i);
        }

        int[] result = new int[list.size()];
        for (int i = 0; i < list.size(); i++) {
            result[i] = list.get(i);
        }

        return result;
    }
}
