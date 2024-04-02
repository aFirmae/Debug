#include<stdio.h>
int main()
{
	int num, temp, rnum, remainder;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num <= -2147483648 || num >= 2147483647)
	{
        printf("Entered number is out of 'int' range.\n");
        return 0;
    }
	temp=num;
	while(num)
	{
		remainder=num%10;
		rnum=rnum*10 + remainder;
		num/=10;
	}
	printf("Reversed number: %d\n",rnum);
	if(temp==rnum)
	{
		printf("Because %d is a palindrome number.", temp);
	}
	return 0;
}
