//Write a program in C to find the GCD of two numbers.
#include <stdio.h>
int smallest(int x, int y)
{
	return ((x <= y) ? x : y);
}
int main()
{
	int num1, num2, i;
	printf("1st number: ");
	scanf("%d", &num1);
	printf("2nd number: ");
	scanf("%d", &num2);

	for (i = smallest(num1, num2); i > 0; i--)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			printf("The GCD of %d and %d is %d", num1, num2, i);
			break;
		}
	}
	return 0;
}
