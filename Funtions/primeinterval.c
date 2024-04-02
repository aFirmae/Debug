#include <stdio.h>

int isPrime(int num)
{
    int i;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int start, end, i, count = 0;

    printf("Enter the range (start and end): \n");
    scanf("%d %d", &start, &end);
    printf("Prime numbers between %d and %d are: \n", start, end);
    for (i = start; i <= end; i++)
    {
        if (i == 1 || i == 0)
        {
            continue;
        }
        if (isPrime(i))
        {
            if (count > 0)
            {
                printf(", ");
            }
            printf("%d", i);
            count++;
        }
    }
    return 0;
}