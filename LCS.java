public class LCS 
{
    public static void main(String[] args) 
    {
        String s1 = "LONGEST";
        String s2 = "STONE";
        System.out.println("LCS is: " + lcs(s1, s2));
        System.out.println("Length of LCS is: " + lcs(s1, s2).length());
    }

    public static String lcs(String s1, String s2) 
    {
        int[][] dp = new int[s1.length() + 1][s2.length() + 1];

        for (int i = 0; i <= s1.length(); i++) 
        {
            for (int j = 0; j <= s2.length(); j++) 
            {
                if (i == 0 || j == 0) {
                    dp[i][j] = 0;
                } 
                else if (s1.charAt(i - 1) == s2.charAt(j - 1)) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } 
                else {
                    dp[i][j] = Math.max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        int i = s1.length(), j = s2.length();
        StringBuilder sb = new StringBuilder();

        while (i > 0 && j > 0) {
            if (s1.charAt(i - 1) == s2.charAt(j - 1)) {
                sb.append(s1.charAt(i - 1));
                i--;
                j--;
            } 
            else if (dp[i - 1][j] > dp[i][j - 1]) i--;
            else j--;
        }

        return sb.reverse().toString();
    }
}