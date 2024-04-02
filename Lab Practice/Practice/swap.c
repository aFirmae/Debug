#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbesr: \n");
    scanf("%d %d", &num1, &num2);
    num1 = num1 +  num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("%d %d", num1, num2);
    printf("\n");
    return 0;
}