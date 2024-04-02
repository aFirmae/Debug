#include <stdio.h>

int main()
{
    int rows = 7;
    int cols = 7;
    int mid = (rows + 1) / 2;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (j == mid - (i - mid) || j == mid + (i - mid) || j == mid - (rows - i + 1) || j == mid + (rows - i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}