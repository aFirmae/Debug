#include <stdio.h>
int power1(int x, int y);
void power2(int x, int y, int *p);

int main()
{
    int base, exponent, p;
    printf("Enter base and exponent in order: \n");
    scanf("%d %d", &base, &exponent);
    power2(base, exponent, &p);
    printf("Power = %d = %d\n", p, power1(base, exponent));
    return 0;
}

void power2(int x, int y, int *p)
{
    int prod = 1;
    for (int i = 1; i <= y; i++)
    {
        prod *= x;
    }
    *p = prod;
}

int power1(int x, int y)
{
    if (y == 1)
    {
        return x;
    }
    else
    {
        return x * power1(x, y - 1);
    }
}