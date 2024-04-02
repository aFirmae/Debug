#include <stdio.h>

void input_array(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void sort(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int b_ser(int arr[], int low, int high, int key)
{
    if (low <= high)
    {
        int mid = (low + high) / 2;  // 1
        if (key == arr[mid])  // 1
        {
            return mid;
        }
        else if (key < arr[mid])  // T(n/2)
        {
            return b_ser(arr, low, mid - 1, key);
        }
        else if (key > arr[mid])  // T(n/2)
        {
            return b_ser(arr, mid + 1, high, key);
        }
    }
    return -1;
}

// T(n) = 1 + T(n/2) = T(n/2) + 1   =>  O(log n)

int main()
{
    int size, key;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];

    input_array(arr, size);

    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    sort(arr, size);

    int value = b_ser(arr, 0, size - 1, key);

    if (value == -1)
    {
        printf("%d not found\n", key);
    }
    else
    {
        printf("%d found\n", key);
    }
    return 0;
}
