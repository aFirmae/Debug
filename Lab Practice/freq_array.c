#include<stdio.h>
int main()
{
    int num, freq[10] = {0};
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num > 0)
    {
        int rem = num % 10;
        freq[rem]++;
        num /= 10;
    }
    for(int i = 0; i < 9; i++)
    {
        printf("The frequency of %d is %d\n", i, freq[i]);
    }
    printf("\n");
    return 0;
}