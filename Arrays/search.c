#include <stdio.h>

void input_array(int*, int);
int ele_search(int*, int, int);

int main()
{
  	int i, size, key, pos, index;
  	printf("Array size: ");
  	scanf("%d", &size);
  	int arr[size];
  	input_array(arr, size);
  	
  	printf("Search for? - ");
  	scanf("%d", &key);
  	
  	index = ele_search(arr, size, key);
  	
  	if(index != -1)
  	{	  
	  printf("%d is found at index %d", key, index);
	}
	else
	{
		printf("%d is not found", key);
	}
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
