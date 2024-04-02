//Write a program in C to find the area of a rectangle.
#include <stdio.h>
int main()
{
	int l,b;
	printf("Enter the length and breadth of the rectangle: \n");
	scanf("%d %d", &l, &b);
	printf("The area of the rectangle is %d", l*b);
	return 0;
}
