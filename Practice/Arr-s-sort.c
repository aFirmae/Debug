#include <stdio.h>

void input_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]: %d\n", i, arr[i]);
    }
}

void s_sort(int arr[], int size)
{
    int j = 0;
    for (int i = 0; i < size - 1; i++)
    {
        int big_index = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] > arr[big_index])
            {
                big_index = j;
            }
        }

        if (j == size - i)
        {
            int temp = arr[big_index];
            arr[big_index] = arr[size - 1];
            arr[size - 1] = temp;
        }
    }
}

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    input_array(arr, size);
    printf("Before sorting:\n");
    print_array(arr, size);
    s_sort(arr, size);
    printf("After sorting:\n");
    print_array(arr, size);

    return 0;
}