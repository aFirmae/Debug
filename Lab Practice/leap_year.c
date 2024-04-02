#include <stdio.h>
int isLY(int x)
{
    if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    printf("%d is %s a leap year.\n", year, isLY(year) ? "" : "not");
    return 0;
}