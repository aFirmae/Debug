#include<stdio.h>

int power(int base, int exp)
{
	int product = 1;
	for(int i=1; i<=exp; i++)
	{
		product*=base;
	}
	return product;
}

int isArmstrong(int num)
{
	int sum = 0, ognum, digit = 0, rem;
	ognum = num;
	while(ognum)
	{
		ognum/=10;
		digit++;
	}
	ognum = num;
	while(ognum)
	{
		rem = ognum%10;
		sum+=power(rem,digit);
		ognum/=10;
	}
	return (num==sum);
}

int main()
{
	int number;
	printf("\nEnter a number: ");
	scanf("%d",&number);

	printf("%d is%s an Armstrong Number.", number, isArmstrong(number)?"":" not");

	return 0;
}