// 𝗪𝗔𝗣 𝗶𝗻 𝗖 𝘁𝗼 𝗳𝗶𝗻𝗱 𝘀𝘂𝗺 𝗼𝗳 𝘀𝗲𝗿𝗶𝗲𝘀: 𝗮 + 𝗮^𝟮 + 𝗮^𝟯 + ... + 𝗮^𝗻.

#include <stdio.h>
#include <math.h>

int sum_series(int a, int n)
{
	int i, sum = 0;
	for(i = 1; i <= n; i++)
	{
		sum += pow(a, i);
	}
	return sum;
}

int main()
{
	int a, n;

	printf("Coefficient: ");
	scanf("%d", &a);
	
	printf("Limit: ");
	scanf("%d", &n);
	
	printf("Sum of series until %d^%d = %d", a, n, sum_series(a, n));

	return 0;
}
