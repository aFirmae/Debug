// Minimum and maximum elements in an array

#include <stdio.h>

int min_num(int[], int);
int max_num(int[], int);

int main()
{
    int size;
    printf("\nArray size: ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &array[i]);
    }

    printf("\nMinimum element: %d\n", min_num(array, size));
    printf("\nMaximum element: %d\n", max_num(array, size));

    return 0;
}

int min_num(int x[], int y)
{
    int min = x[0];

    for (int i = 1; i < y; i++)
    {
        if (x[i] < min)
        {
            min = x[i];
        }
    }
    return min;
}

int max_num(int a[], int b)
{
    int max = a[0];

    for (int i = 1; i < b; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
