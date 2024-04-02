//Write a C program to count frequency of digits in an integer.

#include <stdio.h>

int main() 
{
    int num, digit, count;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(digit = 0; digit <= 9; digit++) 
	{ 
        count = 0; 
        int n = num; 
        while(n > 0) 
		{
            if(n % 10 == digit) 
			{ 
                count++;
            }
            n /= 10; 
        }
        printf("The frequency of digit %d is %d\n", digit, count);
    }
    return 0;
}

