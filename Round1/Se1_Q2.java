// Set 1 : Question 2

import java.util.*;

public class Se1_Q2 
{
    public static void main(String[] args) {
        
        int[] nums = {3, 4, 5, 1, 12, 14, 13};
        System.out.println(smallestLSP(nums));

    }

    public static int smallestLSP(int[] nums) {

        int sum = 0; 
        for (int i = 0; i < nums.length - 1; i++) {
            if (nums[i] + 1 == nums[i + 1])
                sum += nums[i];
        }

        System.out.println(sum);

        ArrayList<Integer> lsp = new ArrayList<>();

        for (int num : nums) lsp.add(num);

        System.out.println(lsp);

        for (int i = 0; i < lsp.size(); ++i) {
            if (lsp.contains(sum)) return sum;
            sum++;
        }

        return sum;
    }
}
