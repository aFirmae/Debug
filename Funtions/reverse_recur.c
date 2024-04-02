#include <stdio.h>

int reverse(int x, int y)
{
    if (x == 0)
    {
        return y;
    }
    else
    {
        int rem = x % 10;
        y = y * 10 + rem;
        return reverse(x / 10, y);
    }
}

int main()
{
    int lower, upper, count = 0;
    printf("\nEnter a lower limit: ");
    scanf("%d", &lower);
    printf("\nEnter an upper limit: ");
    scanf("%d", &upper);

    printf("\n\nPalindrome numbers between %d and %d are: \n", lower, upper);

    for (int i = lower; i <= upper; i++)
    {
        if (reverse(i, 0) == i)
        {
            if (count > 0)
            {
                printf(", ");
            }
            printf("%d", i);
            count++;
        }
    }
    if (count == 0)
    {
        printf("None");
    }
    return 0;
}
