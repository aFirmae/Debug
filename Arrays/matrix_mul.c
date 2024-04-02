#include <stdio.h>
int main()
{
    int row1, col1, row2, col2;
    printf("Order of Matrix 1: \n");
    scanf("%d %d", &row1, &col1);
    printf("Order of Matrix 2 \n");
    scanf("%d %d", &row2, &col2);

    if (col1 != row2)
    {
        printf("Multiplication of matrices of these order is not possible.\n");
        return 0;
    }

    int mat1[row1][col1], mat2[row2][col2], multiply[row1][col2];
    printf("\t Matrix 1 \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("mat1[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("\n\t Matrix 2 \n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("mat2[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Initialize multiply matrix with zeros
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            multiply[i][j] = 0;
        }
    }

    printf("\n\t Product of the Matrices \n");
    for (int i = 0; i < row1; i++)  // n
    {
        for (int j = 0; j < col2; j++)  // n
        {
            for (int k = 0; k < col1; k++)  // n
            {
                multiply[i][j] += mat1[i][k] * mat2[k][j];
            }
            printf("%d  ", multiply[i][j]);
        }
        printf("\n");
    }

    // T(n) = n^3 + 2n^2 + 2n + 1  --> O(n^3)
    return 0;
}