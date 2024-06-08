// Set 1 : Question 1

public class Set1_Q1 {
    public static void main(String[] args) {
        
        int[] possible = {1, 1, 1, 1, 1};

        System.out.println(aliceWins(possible));

    }
    
    public static int aliceWins(int[] possible) {

        int n = possible.length;
        int[][] dp = new int[n + 1][2];
        
        for (int i = 0; i <= n; i++) {
            if (i == 0) {
                dp[i][0] = dp[i][1] = 0;
            } else {
                dp[i][0] = Math.max(dp[i - 1][0], possible[i - 1] == 1 ? dp[i - 1][0] + 1 : dp[i - 1][0]);
                dp[i][1] = Math.max(dp[i - 1][1], possible[i - 1] == 0 ? dp[i - 1][1] - 1 : dp[i - 1][1]);
            }
        }
        
        return dp[n][0] > dp[n][1] ? dp[n][0] - dp[n][1] : -1;
    }
}
