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
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int binary_search(int arr[], int size, int key)
{
    int low = 0, high = size - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
    }
    return -1;
}

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

    int index = binary_search(arr, size, key);

    if (index == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element found at index %d\n", index);
    }
    return 0;
}
