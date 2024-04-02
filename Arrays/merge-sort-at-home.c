// 𝗠𝗲𝗿𝗴𝗲 𝘁𝘄𝗼 𝗮𝗿𝗿𝗮𝘆𝘀 𝗶𝗻𝘁𝗼 𝗮 𝘀𝗶𝗻𝗴𝗹𝗲 𝘀𝗼𝗿𝘁𝗲𝗱 𝗮𝗿𝗿𝗮𝘆

#include<stdio.h>

void input_array(int*, int);
void print_array(int*, int);
void sort(int*, int);

int i;

int main()
{
	int size1, size2;
	printf("Size of Array 1: ");
	scanf("%d", &size1);
	int arr1[size1];
	input_array(arr1, size1);
	
	printf("Size of Array 2: ");
	scanf("%d", &size2);
	int arr2[size2];
	input_array(arr2, size2);
	
	int arr3[size1 + size2];
	for(i = 0; i < size1 + size2; i++)
	{
		if(i < size1)
		{
			arr3[i] = arr1[i];
		}
		else
		{
			arr3[i] = arr2[i - size1];
		}
	}
	sort(arr3, size1 + size2);
	printf("\n\tMerged and Sorted array\n");
	print_array(arr3, size1 + size2);
	
	return 0;
}

void sort(int *arr, int size)
{
	int key, j;
	for(i = 1; i < size; i++)
	{
		key = arr[i];
		j = i;
		while(--j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = key;
	}
}

void print_array(int *arr, int size)
{
	for(i = 0; i < size; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}

void input_array(int *arr, int size)
{
	for(i = 0; i < size; i++)
	{
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
