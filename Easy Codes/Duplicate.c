#include <stdio.h>

void input_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

int main()
{
    int size;
    printf("Size of array: ");
    scanf("%d", &size);

    int arr[size];
    input_array(arr, size);

    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > 1)
        {
            printf("Duplicate elements: ")
                printf("%d (Indexes: ", arr[i]);
            for (int j = 0; j < size; j++)
            {
                if (arr[j] == arr[i])
                {
                    printf("%d", j);
                }
            }
            printf(")\n");
        }
        else
        {
            printf("No duplicate elements\n");
        }
    }
    return 0;
}