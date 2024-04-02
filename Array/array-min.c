#include <stdio.h>
int min(int arr[], int size);

int main()
{
    int size;
    printf("\n Array size?- ");
    scanf("%d", &size);

    int arr[size];

    printf("\n Array elements?- \n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }

    int result = min(arr, size);

    printf("\nMinimum value in the array= %d\n", result);

    return 0;
}

int min(int arr[], int size)
{
    int val = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < val)
        {
            val = arr[i];
        }
    }

    return val;
}