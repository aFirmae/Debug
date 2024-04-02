public class Merge_Matrix
{
    public static void main(String[] args)
    {
        int[][] mat1 = {
                        {1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}
        };
        int[][] mat2 = {
                        {9, 8, 7},
                        {6, 5, 4},
                        {3, 2, 1}
        };

        int[][] mat3 = new int[mat1.length][mat1[0].length + mat2[0].length];

        for (int i = 0; i < mat1.length; i++)
        {
            for (int j = 0; j < mat1[0].length; j++)
            {
                mat3[i][j] = mat1[i][j];
            }
            for (int j = 0; j < mat2[0].length; j++)
            {
                mat3[i][j + mat1[0].length] = mat2[i][j];
            }
        }

        display(mat3);
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
