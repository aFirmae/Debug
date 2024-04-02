#include <stdio.h>

void input_array(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

int linear_search(int arr[], int size, int key)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return i;
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

    printf("Enter the key to search: ");
    scanf("%d", &key);

    int index = linear_search(arr, size, key);

    if (index == -1)
    {
        printf("Key not found\n");
    }
    else
    {
        printf("Key found at position %d\n", index + 1);
    }

    return 0;
}
