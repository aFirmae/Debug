#include <stdio.h>
int largest(int arr[], int n);
int main()
{
    int n, max;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = largest(arr, n);

    printf("The largest element in the array is %d", max);

    return 0;
}
int largest(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}