//Write a program in C to swap two values using third variable.
#include<stdio.h>
int main()
{ 
	int a,b,c;
	printf("Enter 2 numbers: \n");
	scanf("%d %d", &a, &b);
	c=a;
	a=b;
	b=c;
	printf("After swapping 1st number is: %d \n", a);
	printf("After swapping 2nd number is: %d", b);
	return 0;
}
