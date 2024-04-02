#include <stdio.h>
int gcd(int x, int y, int z)
{
    for (int i = z; i > 0; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            return i;
            break;
        }
    }
}
int lcm(int x, int y, int z)
{
    for (int i = z; 1; i++)
    {
        if (i % x == 0 && i % y == 0)
        {
            return i;
            break;
        }
    }
}
int main()
{
    int num1, num2;
    printf("Enter 2 numbesr: \n");
    scanf("%d %d", &num1, &num2);
    int samll = (num1 < num2) ? num1 : num2;
    int large = (num1 > num2) ? num1 : num2;
    printf("GCD: %d\n", gcd(num1, num2, samll));
    printf("LCM: %d\n", lcm(num1, num2, large));
    return 0;
}