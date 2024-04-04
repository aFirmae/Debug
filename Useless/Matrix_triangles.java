/*     Given matrix : 
         *     1  2  3  4  5
         *     6  7  8  9 10
         *     11 12 13 14 15
         *     16 17 18 19 20
         *     21 22 23 24 25
         * 
         *     To print: 
         *           3
         *        7  8  9
         *    11 12 13 14 15
         *       17 18 19
         *         23
*/

public class Matrix_triangles 
{
    public static void main(String[] args) 
    {
        int[][] matrix = {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15},
            {16, 17, 18, 19, 20},
            {21, 22, 23, 24, 25}
        };

        printCenterPyramid(matrix);
    }

    public static void printCenterPyramid(int[][] matrix) 
    {
        int n = matrix.length;
        int mid = n / 2;

        for (int i = 0; i < mid; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                if (j >= mid - i && j <= mid + i) 
                {
                    System.out.print(matrix[i][j] + " ");
                } 
                else 
                {
                    System.out.print("  ");
                }
            }
            System.out.println();
        }

        for (int i = mid; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                if (j >= mid - (n - i - 1) && j <= mid + (n - i - 1)) 
                {
                    System.out.print(matrix[i][j] + " ");
                } 
                else 
                {
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }
    
}
