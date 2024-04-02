#include <stdio.h>

void input_array(int*, int);
int minimum(int*, int, int*);
int maximum(int*, int, int*);

int main()
{
  	int i, size, min, max, pos_min, pos_max;
  	printf("Array size: ");
  	scanf("%d", &size);
  	int arr[size + 1];

  	input_array(arr, size);

	min = minimum(arr, size, &pos_min);
  	max = maximum(arr, size, &pos_max);
  	
  	printf("%d is the minimum element present at index %d\n", min, pos_min);
  	printf("%d is the maximum element present at index %d\n", max, pos_max);
  	
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

int minimum(int *arr, int size, int *pos)
{
	int i, min = arr[0];
	*pos = 0;
	for(i = 1; i < size; i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
			*pos = i;
		}
	}
	return min;
}

int maximum(int *arr, int size, int *pos)
{
	int i, max = arr[0];
	*pos = 0;
	for(i = 1; i < size; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
			*pos = i;
		}
	}
	return max;
}



