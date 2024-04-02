//Write a program in C to find the addition of 2 numbers.
#include <stdio.h> 
int main()
{
	int x, y, sum;
	printf("Enter first number: ");
	scanf("%d", &x);
	printf("Enter second number: ");
	scanf("%d", &y);
	sum = x + y;
	printf("Sum of %d and %d is: %d\n", x, y, sum);
	return 0;
}
