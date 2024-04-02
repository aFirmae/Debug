//Write a program for finding the average of first N natural numbers using a do...while() loop in C.
#include<stdio.h>
int main()
{
	
	int i=1, n, sum=0;
	printf("Enter the limit of natural numbers: ");
	scanf("%d", &n);
	do
	{
		sum+=i;
		i++;
	}
	while(i<=n);
	printf("Average of first %d natural numbers is- %.2f", n, (float)sum/n);
}
