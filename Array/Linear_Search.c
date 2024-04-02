#include <stdio.h>

int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    int n, pos = -1, i;
    printf("Enter search no. \n");
    scanf("%d", &n);
    for (i = 0; i < 5; i++)
    {
        if (a[i] == n)
        {
            pos = i + 1;
            break;
        }
    }
    if (pos == -1)
    {
        printf("Number %d doesn't exist", n);
    }
    else
    {
        printf("%d is present at position %d", n, pos);
    }
    return 0;
}
