//Write a program in C to check whether a number is Positive or Negative
#include<stdio.h>
int main()
{
    int num;
    printf("Enter your integer- ");
    scanf("%d", &num);
    if (num==0)
        printf("The number you have entered is 0.");
    else if(num<0)
    {
        printf("%d is a negative number.", num);
    }
    else if(num>0)
    {
        printf("%d is a positive number.", num);  
    }
    return 0;
}
