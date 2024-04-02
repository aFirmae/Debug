//Write a program in C to check whether a number in prime or composite.
#include<stdio.h>
int main()
{
	int num,i,count=0;
	printf("Enter an integer: ");
	scanf("%d",&num);
	if(num==1 || num==0)
	{
		printf("%d is neither prime nor composite.", num);
		return 0;
	}
	for(i=2;i<=(num/2);i++)
	{
		if(num%i==0)
		{
			count=1;
			break;
		}
	}
		printf("%d is%s a prime number.",num,(count==0)?"":" not");
		return 0;
}
