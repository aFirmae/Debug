#include <stdio.h>
int main()
{
    int size, temp = 0;
    printf("Array size: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nPrinting Sorted Array.\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    printf("\n");
    return 0;
}
