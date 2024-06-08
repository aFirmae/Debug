// Set 3: Question 1

public class Set3_Q1 {
    
    public static void main(String[] args) {
        
        System.out.println(maxXOR(12, 5, 4));
    }

    public static int maxXOR(int a, int b, int n) {

        long max = Integer.MIN_VALUE;

        for (int i = 0; i < Math.pow(2, n); i++) {

            max = Math.max(max, (a^i) * (b^i));
        }

        if (max >= Integer.MAX_VALUE) return (int)(max % (Math.pow(10, 9) + 7));
        else return (int) max;
    }
}
