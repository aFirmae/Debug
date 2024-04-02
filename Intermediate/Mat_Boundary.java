import java.util.Scanner;
public class Mat_Boundary {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows and columns of the matrix: ");
        int rows = sc.nextInt();
        int cols = sc.nextInt();
        int[][] mat = mat_input(rows, cols);
        mat_display(mat);
        printBoundary(mat, rows, cols);
    }
    public static void printBoundary(int[][] mat, int m, int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                    System.out.print(mat[i][j] + " ");
                }
                else {
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }
    public static void mat_display(int[][] arr)
    {
        System.out.println("The array is: ");
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[0].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println();
    }
    public static int[][] mat_input(int rows, int cols) {
        Scanner sc = new Scanner(System.in);
        int[][] mat = new int[rows][cols];
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print("mat[" + i + "][" + j + "] = ");
                mat[i][j] = sc.nextInt();
            }
        }
        return mat;
    }
}
