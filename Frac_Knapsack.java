class Frac_Knapsack
{
    public static double knapSack(int cap, int wt[], int val[], int n) 
    {
        if (n == 0 || cap == 0) return 0;

        double maxProfit = 0;
        for (int i = 0; i < n; i++) 
        {
            if (wt[i] <= cap) {
                maxProfit += val[i];
                cap -= wt[i];
            } 
            else {
                double fraction = (double) cap / wt[i];
                maxProfit += val[i] * fraction;
                break;
            }
        }
        return maxProfit;
    }

    public static void main(String args[]) {
        int profit[] = new int[] { 50, 60, 70 };
        int weight[] = new int[] { 5, 10, 20 };
        int capacity = 20;

        System.out.println("Total profit: " + knapSack(capacity, weight, profit, profit.length));
    }
}
