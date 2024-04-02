//Write a program in C to change the value of a varialble through double pointer.
#include<stdio.h>
int main()
{
	int a, *p1, **p2;
	printf("Input value of 'a': ");
	scanf("%d", &a);
	p1=&a;
	p2=&p1;
	**p2 = 50;
    printf("\nValue of 'a' now: %d\n", a);
	return 0;
}