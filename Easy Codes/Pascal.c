// 𝗪𝗔𝗣 𝗶𝗻 𝗖 𝘁𝗼 𝗽𝗿𝗶𝗻𝘁 𝗣𝗮𝘀𝗰𝗮𝗹'𝘀 𝘁𝗿𝗶𝗮𝗻𝗴𝗹𝗲.⁡⁡

#include <stdio.h>

int main()
{
	int rows, i, j, space, flag = 1;
	printf("Enter number of rows: ");
	scanf("%d", &rows);

	for (i = 0; i < rows; i++)
	{
		for (space = 1; space <= rows - i; space++)
		{
			printf(" ");
		}

		for (j = 0; j <= i; j++)
		{
			if (j == 0 || i == 0)
				flag = 1;
			else
				flag *= (float)(i - j + 1) / j;

			printf("%4d", flag);
		}
		printf("\n");
	}
	return 0;
}
