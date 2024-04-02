// 𝗪𝗔𝗣 𝗶𝗻 𝗖 𝘁𝗼 𝗳𝗶𝗻𝗱 𝗳𝗮𝗰𝘁𝗼𝗿𝗶𝗮𝗹 𝗼𝗳 𝗮 𝗻𝘂𝗺𝗯𝗲𝗿.

#include <stdio.h>

int fact(int);

int main()
{
	int num;
	printf("Number: ");
	scanf("%d", &num);
	
	printf("Factorial of %d is %d", num, fact(num));

	return 0;
}

int fact(int num)
{
	if(num == 0)
	{
		return 1;
	}
	else
	{
		return num * fact(num - 1);
	}
}
