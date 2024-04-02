// 𝗪𝗔𝗣 𝗶𝗻 𝗖 𝘁𝗼 𝗳𝗶𝗻𝗱 𝗹𝗮𝗿𝗴𝗲𝘀𝘁 𝗼𝗳 𝟯 𝗻𝘂𝗺𝗯𝗲𝗿𝘀.

#include <stdio.h>
int grt_3(int, int, int);

int main()
{
	int a, b, c;
	printf("Enter 3 numbers: \n");
	scanf("%d %d %d", &a, &b, &c);
	
	printf("%d is largest", grt_3(a, b, c));
	
	return 0;
}

int grt_3(int x, int y, int z)
{
	return (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
}
