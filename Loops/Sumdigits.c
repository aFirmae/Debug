// Write a program in C to print the sum of digits of a number.
#include <stdio.h>
int main()
{
	int num, snum, store, sum = 0;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	snum = num;
	store = num;
	while (num)
	{
		store %= 10;
		sum += store;
		num /= 10;
		store = num;
	}
	printf("Sum of the digits of %d is %d.", snum, sum);
	return 0;
}
