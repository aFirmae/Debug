#include <stdio.h>
int main()
{
    int count = 0;
    printf("Odd numbers from 1 to 100 are: \n");
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0)
            continue;
        if (count > 0)
        {
            printf(", ");
        }
        printf("%d", i);
        count++;
    }
}