//Write a program to find the GCD and LCM of two numbers using funtion.
#include <stdio.h>
int lcm(int x, int y, int lorge)
{
	while (1)
	{
		if (lorge % x == 0 && lorge % y == 0)
		{
			return lorge;
			break;
		}
		lorge++;
	}
}
int gcd(int x, int y, int smol)
{
	if (x % smol == 0 && y % smol == 0)
	{
		return smol;
	}
	else
	{
		return gcd(x, y, smol - 1);
	}
}

int main()
{
	int num1, num2, smol, lorge;
	printf("1st number: ");
	scanf("%d", &num1);
	printf("2nd number: ");
	scanf("%d", &num2);

	smol = (num1 <= num2) ? num1 : num2;
	lorge = (num1 >= num2) ? num1 : num2;

	int a = gcd(num1, num2, smol);
	int b = lcm(num1, num2, lorge);

	printf("GCD of %d and %d is %d\n", num1, num2, a);
	printf("LCM of %d and %d is %d", num1, num2, b);
	return 0;
}
