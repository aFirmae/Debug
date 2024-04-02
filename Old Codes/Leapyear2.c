#include <stdio.h>
int main() 
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    int is_leap_year = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    printf("%d is %sa leap year.\n", year, is_leap_year ? "" : "not ");

    return 0;
}
