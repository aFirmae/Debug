#include <stdio.h>

void input_array(int*, int);
void print_array(int*, int);

int main()
{
  	int i, size, key, pos, index;
  	printf("Array size: ");
  	scanf("%d", &size);
  	int arr[size];

  	input_array(arr, size);

  	printf("Number to delete: ");
  	scanf("%d", &key);
  	index = ele_search(arr, size, key);

	if(index == -1)
  	{	  
		printf("Can't delete whats missing.\n%d is not present in the array.", key);
		return 0;
	}
	
	for(i = index; i < size; i++)
	{
		arr[i] = arr[i + 1];
	}
	
	print_array(arr, size - 1);
  
  	return 0;
}

void input_array(int *arr, int size)
{
	int i;
  	for(i = 0; i < size; i++)
  	{
    	printf("arr[%d] = ", i);
    	scanf("%d", &arr[i]);
  	}
}

void print_array(int *arr, int size)
{
	int i;
  	for(i = 0; i < size; i++)
  	{
    	printf("arr[%d] = %d\n", i, arr[i]);
  	}
}

int ele_search(int *arr, int size, int key)
{
	int i;
	for(i = 0; i < size; i++)
	{
		if(arr[i] == key)
		{
			return i;
		}
	}
	return -1;
}
