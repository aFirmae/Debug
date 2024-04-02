//Write a program in C to print the address of a number using pointer.
#include<stdio.h>
int main()
{
	int num, *p;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	p = &num;
	
	printf("Address of %d is %d", num, p);
	
	return 0;
}
