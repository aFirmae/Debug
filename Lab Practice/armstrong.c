#include <stdio.h>
#include <math.h>
int isArm(int);

int main()
{
    int lower = 0, upper = 100000, count = 0;
    printf("The Armstrong numbers between %d and %d are:  \n", lower, upper);
    for (int i = lower; i <= upper; i++)
    {
        if (isArm(i))
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

int isArm(int num)
{
    int count = 0, sum = 0, store = num, rem;
    while (store > 0)
    {
        store /= 10;
        count++;
    }
    store = num;

    while (store > 0)
    {
        rem = store % 10;
        sum += pow(rem, count);
        store /= 10;
    }

    return (sum == num) ? 1 : 0;
}
