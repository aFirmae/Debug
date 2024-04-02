#include <stdio.h>

int main()
{
    int row1, col1, row2, col2;

    printf("Order of Matrix 1: \n");
    scanf("%d %d", &row1, &col1);

    printf("Order of Matrix 2: \n");
    scanf("%d %d", &row2, &col2);

    if (row1 != row2 && col1 != col2)
    {
        printf("Addition is only possible for matrices of similar order.\n");
        return 0;
    }

    int mat1[row1][col1], mat2[row2][col2], add[row1][col1];

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

    printf("\n\t Sum of the Matrices \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            add[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d  ", add[i][j]);
        }
        printf("\n");
    }
    return 0;
}
