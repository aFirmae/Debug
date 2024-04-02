import java.util.*;
public class Freq2
{
    public static void main(String[] args) {

        int[] nums = {1,2,3,1,2,3,1,2};
        Freq2 obj = new Freq2();
        Map<Integer, Integer> map = obj.frequencyMap(nums);

        System.out.println(map.entrySet().size());

        for(Map.Entry<Integer, Integer> entry : map.entrySet()) {
            System.out.println(entry.getKey() + " " + entry.getValue());
        }
    }

    public Map<Integer, Integer> frequencyMap(int[] nums)
    {
        Map<Integer, Integer> map = new HashMap<>();

        for(int i = 0; i < nums.length; i++) {
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
        }

        return map;
    }
}
