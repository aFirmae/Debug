#include <stdio.h>

void input_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void sort_array(int arr[], int size)  //bubble sort array
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
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
int binary_search(int arr[], int size, int num)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == num)
        {
            return mid; // Found the element at index 'mid'
        }
        else if (arr[mid] < num)
        {
            low = mid + 1; // Search in the right half
        }
        else
        {
            high = mid - 1; // Search in the left half
        }
    }

    return -1; // Element not found
}

int main()
{
    int size, num;
    printf("Array size: ");
    scanf("%d", &size);
    int arr[size];

    input_array(arr, size);
    sort_array(arr, size);

    printf("Number to search: ");
    scanf("%d", &num);

    int index = binary_search(arr, size, num);
    if (index != -1)
    {
        printf("%d found at position %d\n", arr[index], index + 1);
    }
    else
    {
        printf("Error: %d not found\n", num);
    }

    return 0;
}
