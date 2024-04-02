#include<stdio.h>

int main()
{
    int num, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num > 9)
    {
        sum = 0;
        while(num != 0)
        {
            rem = num % 10;
            sum += rem;
            num /= 10;
        }
        num = sum;
    }
    if(num == 1)
        printf("Magic number");
    else
        printf("Not a magic number");
    return 0;
}
