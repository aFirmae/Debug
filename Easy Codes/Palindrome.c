// 𝗪𝗔𝗣 𝗶𝗻 𝗖 𝘁𝗼 𝗳𝗶𝗻𝗱 𝘄𝗵𝗲𝘁𝗵𝗲𝗿 𝗮 𝗻𝘂𝗺𝗯𝗲𝗿 𝗶𝘀 𝗽𝗮𝗹𝗶𝗻𝗱𝗿𝗼𝗺𝗲 𝗼𝗿 𝗻𝗼𝘁.

#include <stdio.h>

int isPalin(int num)
{
	int temp = num, rem, rev;
	while(num > 0)
	{
		rem = num % 10;
		rev = rem + rev * 10;
		num /= 10;
	}
	
	return (temp == rev) ? 1 : 0;
}

int main()
{
	int num;
	printf("Number: ");
	scanf("%d", &num);
	
	printf("%d is %sPalindrome", num, (isPalin(num))?"":"not ");

	return 0;
}
