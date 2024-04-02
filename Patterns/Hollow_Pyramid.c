#include <stdio.h>

int main()
{
    int rows = 5;
    int cols = 9;
    int mid = (cols + 1) / 2;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (i == rows || j == mid - (i - 1) || j == mid + (i - 1))
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