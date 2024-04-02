// 𝗔𝗱𝗱 𝗲𝗹𝗲𝗺𝗲𝗻𝘁𝘀 𝗼𝗳 𝗮𝗻 𝗱𝘆𝗻𝗮𝗺𝗶𝗰𝗮𝗹𝗹𝘆 𝗮𝗹𝗹𝗼𝗰𝗮𝘁𝗲𝗱 𝗮𝗿𝗿𝗮𝘆.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr, size, index, sum = 0;
	printf("Array Size: ");
	scanf("%d", &size);
	arr = (int*)malloc(size * sizeof(int));
	for(index = 0; index < size; index++)
	{
		printf("arr[%d]: ", index);
		scanf("%d", arr);
		sum += *arr;
		arr++;
	}	
	printf("Sum of above elements: %d", sum);
	
	return 0;
}
