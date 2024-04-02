#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

void input_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

int arr_min(int *arr, int size, int k)
{
    int pos = k;
    for (int i = k + 1; i < size; i++)
    {
        if (arr[i] < arr[pos])
        {
            pos = i;
        }
    }
    return pos;
}

void sort(int *arr, int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        int pos = arr_min(arr, size, i);
        temp = arr[pos];
        arr[pos] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int *arr, size;
    printf("Array Size: ");
    scanf("%d", &size);
    arr = (int *)malloc(size * sizeof(int));
    input_array(arr, size);
    sort(arr, size);

    printf("\n\tSorted Array: \n");
    print_array(arr, size);

    return 0;
}