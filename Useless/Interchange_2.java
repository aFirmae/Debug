public class Interchange_2
{
    public static void main(String[] args)
    {
        int[][] mat1 = {
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9}
        };

        interchange(mat1);
        System.out.println("After Interchange: ");
        display(mat1);
    }
    public static void interchange(int[][] mat1)
    {
        int[] temp = mat1[0];
        mat1[0] = mat1[mat1.length - 1];
        mat1[mat1.length - 1] = temp;
    }

    public static void display(int[][] arr)
    {
        for (int i = 0; i < arr.length; i++)
        {
            for (int j = 0; j < arr[0].length; j++)
            {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}
