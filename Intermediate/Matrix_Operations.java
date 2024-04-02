public class Matrix_Operations
{
    public static void main(String[] args) {
        Matrix m = new Matrix(3, 3);
        int[][] matrix = {{2, 7, -5}, {6, 3, 9}, {-4, 2, 8}};
        m.setMatrix(matrix);
        System.out.println("Normal: " + m.getNormal());
        System.out.println("Trace: " + m.getTrace());
        System.out.println("Determinant: " + m.getDeterminant());
    }
}
class Matrix
{
    int[][] matrix;
    int rows, columns;
    Matrix(int rows, int columns)
    {
        this.rows = rows;
        this.columns = columns;
        matrix = new int[rows][columns];
    }
    public void setMatrix(int[][] matrix)
    {
        this.matrix = matrix;
    }
    public double getNormal()
    {
        int sum = 0;
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < columns; j++)
            {
                sum += matrix[i][j] * matrix[i][j];
            }
        }
        return Math.sqrt(sum);
    }
    public int getTrace()
    {
        int sum = 0;
        if(rows == columns)
        {
            for (int i = 0; i < rows; i++)
            {
                sum += matrix[i][i];
            }
        }
        return sum;
    }
    public int getDeterminant()
    {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    }
}

