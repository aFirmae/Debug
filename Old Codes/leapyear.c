#include<stdio.h>
int main() 
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    int is_leap_year = ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
    if(is_leap_year) 
	{
        printf("%d is a leap year.", year);
    } 
	else 
	{
        printf("%d is not a leap year.", year);
    }
    return 0;
}
