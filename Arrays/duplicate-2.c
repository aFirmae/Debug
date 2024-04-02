#include <stdio.h>

void input_array(int*, int);

int main()
{
  	int i, j, size, count = 0;
  	printf("Array size: ");
  	scanf("%d", &size);
  	int arr[size];
  	input_array(arr, size);
  	
  	printf("\t\nDuplicate elements in the array are: ");
  	for(i = 0; i < size; i++)
  	{
  		for(j = i + 1; j < size; j++)
  		{
  			if(arr[i] == arr[j])
  			{
  				if(count++ > 0)
  				{
  					printf(", ");
				}
  				printf("%d", arr[i]);
  			}
		}
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

