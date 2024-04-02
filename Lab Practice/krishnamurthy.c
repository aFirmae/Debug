#include <stdio.h>
int factorial(int);
int isKris(int);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d is%s a Krishnamurthy number.\n", num, (isKris(num)) ? "" : " not");
    return 0;
}
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    } 
    else
    {
        return n * factorial(n - 1);
    }
}

int isKris(int num)
{
    int rem, sum = 0, temp = num;
    while (temp > 0)
    {
        rem = temp % 10;
        sum += factorial(rem);
        temp /= 10;
    }
    return (sum == num) ? 1 : 0;
}
