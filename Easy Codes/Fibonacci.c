// 𝗪𝗔𝗣 𝗶𝗻 𝗖 𝘁𝗼 𝗽𝗿𝗶𝗻𝘁 𝗙𝗶𝗯𝗼𝗻𝗮𝗰𝗰𝗶 𝘀𝗲𝗿𝗶𝗲𝘀 𝘂𝗽𝘁𝗼 𝗻 𝘁𝗲𝗿𝗺𝘀.

#include <stdio.h>
void fibonacci(int n)
{
	int term1 = 0, term2 = 1, nextTerm, count = 0;
	
	for (int i = 1; i <= n; i++)
	{
		if(count++ > 0)
		{
			printf(", ");
		}
		printf("%d", term1);
		nextTerm = term1 + term2;
		term1 = term2;
		term2 = nextTerm;
	}
}

int main()
{
	int lim;
	printf("Limit: ");
	scanf("%d", &lim);
	
	fibonacci(lim);

	return 0;
}
