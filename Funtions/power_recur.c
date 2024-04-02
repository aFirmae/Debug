#include <stdio.h>
int power(int x, int n)
{
	if(n==1)
	{
		return x;
	}
	else
	{
		return x*power(x,n-1);
	}
}

int main()
{
	int x,n;
	printf("Enter the base: ");
	scanf("%d",&x);
	printf("Enter the power: ");
	scanf("%d", &n);
	printf("Result = %d", power(x,n));
	return 0;
}
