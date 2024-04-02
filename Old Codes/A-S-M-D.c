//Write a program in C to find the addition, subtraction, multiplication and division of 2 numbers.
#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter the 2 numbers: \n");
    scanf("%d", &x);
    scanf("%d", &y);
    printf("The sum of %d and %d is: %d\n", x, y, x+y);
    if(x>=y)
    {
        printf("The difference between %d and %d is: %d\n", x, y, x-y);
    }
    else if(y>=x)
    {
        printf("The difference between %d and %d is: %d\n", y, x, y-x);
    }
    printf("The product of %d and %d is: %d\n", x, y, x*y);
    if(y==0)
    {
        printf("Can't divide by zero.\n");
    }
    else
    {
        printf("The division of %d and %d is: %.3f\n", x, y, (float)x/y);
    }
    return 0;
}
