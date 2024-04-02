#include <stdio.h>
int main()
{
    int size;
    printf("Array size?- ");
    scanf("%d", &size);
    int arr[size];
    printf("Array elements: \n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int osize = 0, esize = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            esize++;
        }
        else
        {
            osize++;
        }
    }
    int oarr[osize], earr[esize], e = 0, o = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            earr[e] = arr[i];
            e++;
        }
        else
        {
            oarr[o] = arr[i];
            o++;
        }
    }
    printf("Even array: \n");
    for(int i = 0; i < esize; i++)
    {
        printf("earr[%d] = %d\n", i, earr[i]);
    }

    printf("Odd array: \n");
    for(int i = 0; i < osize; i++)
    {
        printf("oarr[%d] = %d\n", i, oarr[i]);
    }

    printf("\n");
    return 0;
}
