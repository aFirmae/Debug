#include <stdio.h>
int main() 
{
    int num, digit, count, i;
    int freq[10] = {0};
    printf("\nEnter a number: ");
    scanf("%d", &num);
    while(num > 0) 
	{
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    for(i = 0; i <= 9; i++) 
	{
        printf("The frequency of digit %d is %d\n", i, freq[i]);
    }
    return 0;
}