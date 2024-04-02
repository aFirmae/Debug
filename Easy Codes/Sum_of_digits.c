// 𝗪𝗔𝗣 𝗶𝗻 𝗖 𝘁𝗼 𝗳𝗶𝗻𝗱 𝘀𝘂𝗺 𝗼𝗳 𝗱𝗶𝗴𝗶𝘁𝘀 𝗼𝗳 𝗮 𝗻𝘂𝗺𝗯𝗲𝗿.

#include <stdio.h>

int sum_digits(int num)
{
	if(num == 0)
	{
		return 0;
	}
	else
	{
		return (num % 10) + sum_digits(num / 10);
	}
}

int main()
{
	int num;
	printf("Number: ");
	scanf("%d", &num);
	
	printf("Sum of digits of %d is %d", num, sum_digits(num));

	return 0;
}
