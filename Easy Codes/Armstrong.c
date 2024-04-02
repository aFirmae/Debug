// 𝗪𝗔𝗣 𝗶𝗻 𝗖 𝘁𝗼 𝗰𝗵𝗲𝗰𝗸 𝘄𝗵𝗲𝘁𝗵𝗲𝗿 𝗮 𝗻𝘂𝗺𝗯𝗲𝗿 𝗶𝘀 𝗔𝗿𝗺𝘀𝘁𝗿𝗼𝗻𝗴 𝗼𝗿 𝗻𝗼𝘁.

#include <stdio.h>
#include <math.h>

int isArm(int num)
{
	int temp = num, sum = 0, count = 0;
	while (temp > 0)
	{
		int n = temp % 10;
		temp /= 10;
		count++;
	}

	temp = num;

	while (temp > 0)
	{
		int rem = temp % 10;
		sum += pow(rem, count);
		temp /= 10;
	}
	return (num == sum) ? 1 : 0;
}

int main()
{
	int num;
	printf("Number: ");
	scanf("%d", &num);

	printf("%d is %sArmstrong", num, (isArm(num)) ? "" : "not ");

	return 0;
}
