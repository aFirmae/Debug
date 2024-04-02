// 𝗥𝗲𝘃𝗲𝗿𝘀𝗲 𝗮𝗻 𝗮𝗿𝗿𝗮𝘆

#include<stdio.h>

void input_array(int*, int);
void print_array(int*, int);
void reverse(int*, int);

int i;

int main()
{
	
	int size;
	printf("Size of Array: ");
	scanf("%d", &size);
	int arr[size];
	input_array(arr, size);
	
	reverse(arr, size);
	printf("\n\tReversed Array\n");
	print_array(arr, size);
	
	return 0;
}

void reverse(int *arr, int size)
{
	int temp;
	for(i = 0; i < size / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[size - i- 1];
		arr[size - i - 1] = temp;
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
