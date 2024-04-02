//Write a program in C to check whether a number is Odd or Even.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter your integer- ");
    scanf("%d", &num);
    if (num==0)
        printf("The number you entered is 0");
    else if(num<0)
    {
        if(num%2==0)
            printf("%d is a negative even number.", num);
        else
            printf("%d is a negative odd number.", num);
    }
    else if(num>0)
    {
        if(num%2==0)
            printf("%d is a positive even number.", num);
        else
            printf("%d is a positive odd number.", num);  
    }
    return 0;
}