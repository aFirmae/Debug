import java.util.*;

public class Saddle_Point
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int row, col;

        System.out.print("Enter the number of rows: ");
        row = sc.nextInt();
        System.out.print("Enter the number of columns: ");
        col = sc.nextInt();

        int[][] arr = new int[row][col];

        Array2.input(arr, row, col);
        Array2.display(arr);
        Array2.saddle(arr);
    }
}

class Array2
{
    public static Scanner sc = new Scanner(System.in);
    public static void input(int[][] arr, int row, int col)
    {
        for(int i = 0; i < row; i++)
        {
            System.out.println("Enter the elements of row " + (i + 1) + ": ");
            for(int j = 0; j < col; j++)
            {
                System.out.print("arr[" + i + "][" + j + "] = ");
                arr[i][j] = sc.nextInt();
            }
        }
        System.out.println();
    }
    public static void display(int[][] arr)
    {
        System.out.println("The array is: ");
        for(int i = 0; i < arr.length; i++)
        {
            for (int j = 0; j < arr[0].length; j++)
            {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println();
    }
    public static void saddle(int[][] arr)
    {
        int row = arr.length, col = arr[0].length;
        int min, max;
        boolean flag = false;

        for(int i = 0; i < row; i++)
        {
            min = arr[i][0];
            for(int j = 0; j < col; j++)
            {
                if(arr[i][j] < min)
                {
                    min = arr[i][j];
                }
            }
            for(int k = 0; k < col; k++)
            {
                if(arr[i][k] == min)
                {
                    max = arr[0][k];
                    for (int l = 0; l < row; l++)
                    {
                        if(arr[l][k] > max)
                        {
                            max = arr[l][k];
                        }
                    }
                    if(min == max)
                    {
                        System.out.println("Saddle point found at: " + min);
                        flag = true;
                    }
                }
            }
        }
        if(!flag)
        {
            System.out.println("No saddle point found");
        }
    }
}