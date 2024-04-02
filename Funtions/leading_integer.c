#include <stdio.h>
int leadingDigit(int num);

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("The leading digit of %d is %d\n", num, leadingDigit(num));
    return 0;
}

int leadingDigit(int num)
{
    while (num >= 10)
    {
        num /= 10;
    }
    return num;
}