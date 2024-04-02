#include <stdio.h>
#include <math.h>

int main()
{
    int exp, explimit, num;
    unsigned int exponent; // TODO Needs change
    printf("\nEnter the number: ");
    scanf("%d", &num);
    printf("\nEnter the exponential limit: ");
    scanf("%d", &explimit);
    if (num == 0 || explimit == 0) // TODO Needs change
    {
        printf("\n0 not allowed.");
        return 0;
    }
    if (num <= 10 || explimit <= 12)
    {
        for (exp = 0; exp <= explimit; exp++)
        {
            exponent = pow(num, exp);
            printf("\n%d^%d= %u", num, exp, exponent); // TODO Needs change
            if (exponent == 0)                         // TODO Needs change
            {
                printf("    :Out of Range value is printed.");
            }
        }
    }
    else if (explimit > 20) // TODO Needs change
    {
        printf("\nNumber and/or exponential limit is too big\n");
    }
    printf("\n\n");
    return 0;
}
