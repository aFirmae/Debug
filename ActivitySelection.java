class ActivitySelection 
{
    public static void printMaxActivities(int s[], int f[]) {
        int i = 0;

        System.out.println("Following activities are selected");
        System.out.print("A" + (1 + i) + " ");

        for (int j = 1; j < s.length; j++) 
        {
            if (s[j] >= f[i]) 
            {
                System.out.print("A" + (1 + j) + " ");
                i = j;
            }
        }
        System.out.println();
    }

    public static void main(String[] args) 
    {
        int start[] = { 1, 3, 2, 4, 8, 7, 9, 11, 9, 12 };
        int finish[] = { 3, 4, 5, 7, 9, 10, 11, 12, 13, 14 };

        printMaxActivities(start, finish);
    }
}
