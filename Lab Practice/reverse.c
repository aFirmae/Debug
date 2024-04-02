#include <stdio.h>
int reverse(int);
int revs(int, int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d in reverse is %d\n", num, reverse(num));
    return 0;
}

int reverse(int a)
{
    int rem, rev = 0;
    while (a != 0)
    {
        rem = a % 10;
        rev = rem + rev * 10;
        a /= 10;
    }
    return rev;
}

int revs(int a, int rev)
{
    int rem;
    if(a == 0)
    {
        return rev;
    }
    else
    {
        rem = a % 10;
        rev = rem + rev * 10;
        return revs((a / 10), rev);
    }
}