#include <stdio.h>

int main()
{
    int arr[3][5] = {{11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    printf("rows = %d, cols = %d\n", rows, cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nTransposed matrix: \n\n");
    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}