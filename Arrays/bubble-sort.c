#include <stdio.h>

void input_array(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void print_array(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

void bu_sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
        print_array(array, size);
    }
}

void b_sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size-1; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
        print_array(array, size);
    }
}

int main()
{
    int size;
    printf("Array size: ");
    scanf("%d", &size);

    int arr[size];
    input_array(arr, size);
    printf("Normal\n");
    bu_sort(arr, size);
    printf("2:\n");
    b_sort(arr, size);

    printf("\n\tSorted Array:\n");
    print_array(arr, size);

    return 0;
}

