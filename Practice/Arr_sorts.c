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

void b_sort(int* arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void i_sort(int* arr, int size)
{
    int key;
    for (int i = 1; i < size; i++)
    {
        key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        print_array(arr, size);
        printf("\n");
    }
}

int min_pos(int* arr, int size, int pos)
{
    for (int i = pos + 1; i < size; i++)
    {
        if (arr[i] < arr[pos])
        {
            pos = i;
        }
    }
    return pos;
}

void s_sort(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int pos = min_pos(arr, size, i);
        if (i != pos)
        {
            int temp = arr[i];
            arr[i] = arr[pos];
            arr[pos] = temp;
        }
    }
}

void ss_sort(int* arr, int size)
{
    int min;
    int* a = arr;
    for (int i = 0; i < size; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (*(a + j) < *(a + min)) min = j;
        }

        if (i != min)
        {
            int temp = *(a + i);
            *(a + i) = *(a + min);
            *(a + min) = temp;
        }
    }
}

int main()
{
    int size;
    printf("Size of array: ");
    scanf("%d", &size);

    int arr[size];
    input_array(arr, size);

    i_sort(arr, size);
    // b_sort(arr, size);
    // s_sort(arr, size);
    // ss_sort(arr, size);

    printf("\n");
    print_array(arr, size);

    return 0;
}