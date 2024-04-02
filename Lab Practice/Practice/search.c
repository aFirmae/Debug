#include <stdio.h>
int main()
{
    int size, num;
    printf("Array size: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Number to search: ");
    scanf("%d", &num);

    for (int i = 0; i < size; i++)
    {
        if (num == arr[i])
        {
            printf("%d found at position %d", arr[i], i + 1);
            break;
        }
        else
        {
            printf("Error %d not found", num);
            break;
        }
    }
    printf("\n");
    return 0;
}
