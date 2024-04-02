#include <stdio.h>
int LeadingInteger(int x)
{
    if (x < 10)
    {
        return x;
    }
    else
    {
        return LeadingInteger(x / 10);
    }
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d\n", LeadingInteger(num));
    return 0;
}

/*while (x > 0)
{
    rem = x % 10;
    x /= 10;
}
return rem;*/