#include <stdio.h>

int min_num(int arr[], int size, int *position)
{
    int min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            *position = i;
        }
    }

    return min;
}

int max_num(int arr[], int size, int *position)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            *position = i;
        }
    }

    return max;
}

int main()
{
    int n;
    printf("Array size? - ");
    scanf("%d", &n);
    int arr[n];

    printf("Array elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int min, max;
    int min_pos = 0, max_pos = 0;

    min = min_num(arr, n, &min_pos);
    max = max_num(arr, n, &max_pos);

    printf("Minimum number: %d\n", min);
    printf("Position of minimum number: %d\n", min_pos + 1);

    printf("Maximum number: %d\n", max);
    printf("Position of maximum number: %d\n", max_pos + 1);

    return 0;
}
