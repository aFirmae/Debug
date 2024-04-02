#include <stdio.h>
#include <stdlib.h>

int min_num(int[], int, int *);
int max_num(int[], int, int *);

int main()
{
    int n;
    int pos1;
    int pos2;

    printf("Array size? - ");
    scanf("%d", &n);
    int arr[n];

    printf("Array elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    int max = max_num(arr, n, &pos1);
    int min = min_num(arr, n, &pos2);

    printf("The max number in the array is %d in position %d\n", max, pos1 + 1);
    printf("The min number in the array is %d in position %d\n", min, pos2 + 1);

    return 0;
}

int min_num(int array[], int n, int *p)
{
    int min = array[0];
    *p = 0;

    for (int i = 1; i < n; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
            *p = i;
        }
    }

    return min;
}

int max_num(int array[], int n, int *p)
{
    int max = array[0];
    *p = 0;

    for (int i = 1; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            *p = i;
        }
    }

    return max;
}
