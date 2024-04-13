class Knapsack 
{
    public static int knapSack(int cap, int wt[], int val[], int n) 
    {
        if (n == 0 || cap == 0) return 0;

        if (wt[n - 1] > cap) {
            return knapSack(cap, wt, val, n - 1);
        }
        else {
            return Math.max(val[n - 1] + knapSack(cap - wt[n - 1], wt, val, n - 1),
                       knapSack(cap, wt, val, n - 1));
        }
    }

    public static void main(String args[]) 
    {
        int profit[] = new int[] { 50, 60, 70 };
        int weight[] = new int[] { 5, 10, 20 };
        int capacity = 20;

        System.out.println("Total profit: " + knapSack(capacity, weight, profit, profit.length));
    }
}
