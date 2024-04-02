#include <stdio.h>
int gcd(int x, int y, int small)
{
	for (int i = small; i > 0; i--)
	{
		if (x % i == 0 && y % i == 0)
		{
			small = i;
			break;
		}
	}
	return small;
}
int hcf(int x, int y, int small)
{
	if (x % small == 0 && y % small == 0)
	{
		return small;
	}
	else
	{
		return hcf(x, y, small - 1);
	}
}
int lcm(int x, int y, int large)
{
	for (int i = large; i <= x * y; i++)
	{
		if (i % x == 0 && i % y == 0)
		{
			large = i;
			break;
		}
	}
	return large;
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

	int a = hcf(num1, num2, smol);
	int b = lcm(num1, num2, lorge);

	printf("GCD of %d and %d is %d\n", num1, num2, a);
	printf("LCM of %d and %d is %d", num1, num2, b);
	return 0;
}