//Write a program in C to find the GCD of two numbers using recursion.
#include <stdio.h>
int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return gcd(y, x % y);
    }
}
int main()
{
    int num1, num2;
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);

    printf("The GCD of %d and %d is %d", num1, num2, gcd(num1,num2));

    return 0;
}