#include <stdio.h>

void input_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i + 1, arr[i]);
    }
}

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    input_array(arr, size);

    int i, j, k, mid;
    int temp[size];

    for (int gap = 1; gap < size; gap *= 2)
    {
        for (int start = 0; start < size - gap; start += 2 * gap)
        {
            mid = start + gap - 1;
            int end = start + 2 * gap - 1;
            if (end > size - 1)
                end = size - 1;

            i = start;
            j = mid + 1;
            k = start;

            while (i <= mid && j <= end)
            {
                if (arr[i] < arr[j])
                    temp[k++] = arr[i++];
                else
                    temp[k++] = arr[j++];
            }

            while (i <= mid)
                temp[k++] = arr[i++];

            while (j <= end)
                temp[k++] = arr[j++];

            for (int i = start; i <= end; i++)
                arr[i] = temp[i];
        }
    }

    print_array(arr, size);
    return 0;
}