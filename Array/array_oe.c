// WAP to transfer odd and even numbers in two different arrays

#include <stdio.h>
void main()
{
    int n, c, i, j = 0, k = 0;
    printf("\n\n\tFirst input an array.\nSize of the array?: ");
    scanf("%d", &n);
    int a[n], e_count = 0, o_count = 0;

    for (i = 0; i < n; i++)
    {
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0)
        {
            e_count++;
        }
        else
        {
            o_count++;
        }
    }

    int e[e_count], o[o_count];
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            e[j] = a[i];
            j++;
        }
        else
        {
            o[k] = a[i];
            k++;
        }
    }

    printf("\nEven array:\n");
    for (c = 0; c < e_count; c++)
    {
        printf("e[%d]= %d\n", c, e[c]);
    }

    printf("\nOdd array:\n");
    for (c = 0; c < o_count; c++)
    {
        printf("o[%d]= %d\n", c, o[c]);
    }
}