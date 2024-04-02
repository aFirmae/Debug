#include <stdio.h>
int power2(int base, int exponent);
int power(int base, int exponent)
{
    int product = 1;
    for (int i = 1; i <= exponent; i++)
    {
        product *= base;
    }
    return product;
}

int main()
{
    int num, exp;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter exponent: ");
    scanf("%d", &exp);
    printf("(%d)^(%d) is- %d\n", num, exp, power2(num, exp));
    return 0;
}

int power2(int base, int exponent)
{
    if (exponent == 1)
    {
        return base;
    }
    else
    {
        return base * power2(base, exponent - 1);
    }
}