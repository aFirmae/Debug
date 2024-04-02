// 𝗪𝗔𝗣 𝗶𝗻 𝗖 𝘁𝗼 𝗽𝗿𝗶𝗻𝘁 𝗙𝗶𝗯𝗼𝗻𝗮𝗰𝗰𝗶 𝘀𝗲𝗿𝗶𝗲𝘀 𝘂𝗽𝘁𝗼 𝗻 𝘁𝗲𝗿𝗺𝘀.

#include <stdio.h>

int fibonacci(int n)
{
	if (n <= 1)
		return n;
	
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	int lim;
	printf("Limit: ");
	scanf("%d", &lim);
	
	for (int i = 0; i < lim; i++)
	{
		if (i > 0)
		{
			printf(", ");
		}
		printf("%d", fibonacci(i));
	}
	printf("\n");

	return 0;
}
