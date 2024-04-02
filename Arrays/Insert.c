#include <stdio.h>

void input_array(int*, int);
void print_array(int*, int);

int main()
{
	int i, j, size, key, pos;
	printf("Array size: ");
	scanf("%d", &size);
	int arr[size + 1];

	input_array(arr, size);

	printf("Number to insert: ");
	scanf("%d", &key);
	printf("At position: ");
	scanf("%d", &pos);

	for (i = size; i >= pos; i--)
	{
		arr[i] = arr[i - 1];
	}

	arr[pos - 1] = key;
	print_array(arr, size + 1);

	return 0;
}

void input_array(int* arr, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void print_array(int* arr, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}
