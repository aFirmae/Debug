#include <stdio.h>

void input_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

void i_sort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = array[i];
        int j = i;

        while (--j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
        }
        array[j + 1] = key;
    }
}

int main()
{
    int size;
    printf("Array size: ");
    scanf("%d", &size);

    int arr[size];
    input_array(arr, size);

    i_sort(arr, size);

    printf("\n\tSorted Array:\n");
    print_array(arr, size);

    return 0;
}