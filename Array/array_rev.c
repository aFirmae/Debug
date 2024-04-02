#include <stdio.h>
int main()
{
    int array, i, j, k = 0;
    printf("\nArray size?- ");
    scanf("%d", &array);
    int arr[array], arr0[array];

    printf("\nElements in the array: \n");
    for (i = 0; i < array; i++)
    {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nReversing Arrays...\n\n");

    for (j = array - 1; j >= 0; j--)
    {
        arr0[k] = arr[j];
        printf("arr[%d]= %d\n", k, arr0[k]);
        k++;
    }
    printf("\n");
    return 0;
}
