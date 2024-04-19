public class ArraySorts {
    public static void main(String[] args) {
        
        Sorts sorts = new Sorts();

        int[] nums = {5, 3, 8, 4, 2};

        System.out.println("Before sorting: " + java.util.Arrays.toString(nums));

        // sorts.bubble(nums);
        sorts.selection(nums);
        // sorts.insertion(nums);

        System.out.println("After sorting: " + java.util.Arrays.toString(nums));
    }
}

class Sorts {
    public void bubble(int[] nums) {

        for (int i = 0; i < nums.length - 1; i++) {

            for (int j = 0; j < nums.length - i - 1; j++) {

                if (nums[j + 1] < nums[j]) {
                    swap(nums, j, j + 1);
                }
            }
        }
    }

    public void selection(int[] nums) {

        int minPos = 0;

        for (int i = 0; i < nums.length - 1; i++) {

            minPos = i;
            for (int j = i + 1; j < nums.length; j++) {

                minPos = (nums[j] < nums[minPos]) ? j : minPos;
            }
            if (i != minPos) swap(nums, i, minPos);
        }
    }

    public void insertion(int[] nums) {

        int key = 0, j = 0;
        for (int i = 1; i < nums.length; i++) {

            key = nums[i];
            j = i - 1;

            while (j >= 0 && nums[j] > key) {
                nums[j + 1] = nums[j];
                j--;
            }
            nums[j + 1] = key;
        }
    }

    private void swap(int[] nums, int j, int i) {

        nums[i] ^= nums[j];
        nums[j] ^= nums[i];
        nums[i] ^= nums[j];
    }
}
