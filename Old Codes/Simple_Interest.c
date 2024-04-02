//Write a program in C to find Simple Interest.
#include <stdio.h>
int main()
{
    float principal,rate,time;
    printf("Enter the Principal- ");
    scanf("%f",&principal);
    printf("Enter the Rate of Interest- ");
    scanf("%f",&rate);
    printf("Enter the duration of widthdral(Years)- ");
    scanf("%f",&time);
    float si=(principal*rate*time)/100;
    printf("The simple interest is: %.2f\n",si);
    printf("The amount after interest is: %.2f\n",principal+si);
    return 0;
}