// 𝗨𝗽𝗱𝗮𝘁𝗲 𝘁𝗵𝗲 𝘀𝗶𝘇𝗲 𝗼𝗳 𝗮𝗻 𝗮𝗿𝗿𝗮𝘆 𝗮𝗻𝗱 𝗮𝗱𝗱 𝗮𝗹𝗹 𝘁𝗵𝗲 𝗲𝗹𝗲𝗺𝗲𝗻𝘁𝘀 𝗶𝗻 𝗶𝘁.

#include<stdio.h>
#include<stdlib.h>

int sum_array(int *arr, int size, int pos)
{
	int index, sum = 0;
	for(index = pos; index < size; index++)
	{
		printf("arr[%d]: ", index);
		scanf("%d", arr);
		sum += *arr;
		arr++;
	}
	return sum;
}

int main()
{
	int *arr, size1, size2, index, sum = 0;
	printf("Array Size: ");
	scanf("%d", &size1);
	arr = (int*)malloc(size1 * sizeof(int));
	sum = sum_array(arr, size1, 0);
	printf("Sum of above elements: %d\n\n", sum);

	printf("New Array Size: ");
	scanf("%d", &size2);
	arr = (int*)realloc(arr, size2 * sizeof(int));
	sum += sum_array(arr, size2, size1);
	printf("Sum of above elements: %d\n", sum);

	return 0;
}
