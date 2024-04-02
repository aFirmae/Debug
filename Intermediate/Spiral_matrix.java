import java.util.Scanner;
public class Spiral_matrix
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number of rows and columns: ");
        int row=sc.nextInt();
        int col=sc.nextInt();
        int[][] arr=new int[row][col];

        Array1 obj=new Array1();
        obj.input(arr);
        obj.display(arr);
        System.out.print("Spiral matrix is: ");
        obj.spiral(arr);
    }
}
class Array1
{
    void input(int[][] arr)
    {
        Scanner sc=new Scanner(System.in);
        int i,j;
        for(i=0;i<arr.length;i++)
        {
            for(j=0;j<arr[i].length;j++)
            {
                System.out.print("arr["+i+"]["+j+"] = ");
                arr[i][j]=sc.nextInt();
            }
        }
    }
    void display(int[][] arr)
    {
        int i,j;
        for(i=0;i<arr.length;i++)
        {
            for(j=0;j<arr[i].length;j++)
            {
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
    }
    void spiral(int[][] arr)
    {
        int i;
        int row=arr.length;
        int col=arr[0].length;
        int k=0,l=0;
        while(k<row && l<col)
        {
            for(i=l;i<col;i++)
            {
                System.out.print(arr[k][i]+" ");
            }
            k++;
            for(i=k;i<row;i++)
            {
                System.out.print(arr[i][col-1]+" ");
            }
            col--;
            if(k<row)
            {
                for(i=col-1;i>=l;i--)
                {
                    System.out.print(arr[row-1][i]+" ");
                }
                row--;
            }
            if(l<col)
            {
                for(i=row-1;i>=k;i--)
                {
                    System.out.print(arr[i][l]+" ");
                }
                l++;
            }
        }
    }
}
