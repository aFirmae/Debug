// 𝗪𝗔𝗣 𝗶𝗻 𝗖 𝘁𝗼 𝗽𝗿𝗶𝗻𝘁 𝗼𝗱𝗱 𝗻𝘂𝗺𝗯𝗲𝗿𝘀 𝘂𝗽𝘁𝗼 𝗻 𝘁𝗲𝗿𝗺𝘀.

#include <stdio.h>

void print_odd(int n)
{
	int i, count = 0;
	for(i = 1; i <= n; i++)
	{
		if((i % 2) != 0)
		{
			if(count > 0)
			{
				printf(", ");
			}
			printf("%d", i);
			count++;
		}
	}
}

int main()
{
	int lim;
	printf("Limit: ");
	scanf("%d", &lim);
	
	print_odd(lim);

	return 0;
}
