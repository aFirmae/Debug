#include <stdio.h>
int main()
{
    int size, sum = 0;
    printf("Array size: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    /*for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d", i, arr[i]);
    }*/
    printf("SUm: %d\n", sum);
    return 0;
}
