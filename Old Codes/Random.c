//Write a programming in C to find the addition, subtraction, multiplication or division of two numbers.
#include<stdio.h>
int main()
{
    int a,b;
    char sign;
    printf("Mathematical Operation on 2 Integers.\n");
    printf("What's the first number- ");
    scanf("%d",&a);
    printf("What operation would you like to perform?\n");
    scanf(" %c",&sign);
    printf("What's the second number- ");
    scanf("%d",&b);
    switch (sign)
    {
    case '+':
        printf("The sum of %d and %d is %d",a,b,a+b);
        break;
    case '-':
        if(a>=b)
        printf("The difference between %d and %d is %d",a,b,a-b);
        else if(b>=a)
        printf("The difference between %d and %d is %d",b,a,b-a);
        break;
    case '*':
        printf("The product of %d and %d is %d",a,b,a*b);
        break;
    case '/':
        if(b==0)
        printf("Can't divide by 0");
        else
        printf("The division of %d by %d is %.3f",a,b,(float)a/b);
        break;
    default:
        printf("Operation currently not functional.");
        break;
    }
    return 0;
}
