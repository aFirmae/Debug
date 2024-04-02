// 𝗪𝗔𝗣 𝗶𝗻 𝗖 𝘁𝗼 𝗳𝗶𝗻𝗱 𝘄𝗵𝗲𝘁𝗵𝗲𝗿 𝗮 𝗻𝘂𝗺𝗯𝗲𝗿 𝗶𝘀 𝗼𝗱𝗱 𝗼𝗿 𝗲𝘃𝗲𝗻.

#include <stdio.h>

int odd_even(int num)
{
	return (num % 2 == 0) ? 1 : 0;
}

int main()
{
	int num;
	printf("Number: ");
	scanf("%d", &num);

	printf("%d is %s", num, (odd_even(num)) ? "even" : "odd");
	return 0;
}
