class Knapsack
{
    public static int knapSack(int cap, int wt[], int val[], int n) 
    {
        if (n == 0 || cap == 0) return 0;

        int maxProfit = 0;
        for (int i = 0; i < n; i++) 
        {
            if (wt[i] <= cap) {
                maxProfit += val[i];
                cap -= wt[i];
            } 
        }
        return maxProfit;
    }

    public static void main(String args[]) 
    {
        int profit[] = new int[] { 99, 75, 76, 21, 31 };
        int weight[] = new int[] { 3, 8, 14, 6, 9 };
        int capacity = 25;

        System.out.println("Total profit: " + knapSack(capacity, weight, profit, profit.length));
    }
}
