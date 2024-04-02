//Write a program in C to print the sum of a number using pointer.
#include<stdio.h>
int main()
{
	int num1, num2;
	printf("Number 1: ");
	scanf("%d", &num1);
	printf("Number 2: ");
	scanf("%d", &num2);
	
	int *p1 = &num1;
	int *p2 = &num2;
	
	int sum = *p1 + *p2;
	
	printf("Sum = %d", sum);
	
	return 0;
}
