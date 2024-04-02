//WAP in C to find the sum of all elements in an array.

#include <stdio.h>
int main()
{
	int n, i, sum=0;
	printf("\n\nEnter the size of the array: ");
	scanf("%d", &n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
		sum+=a[i];
	}
	printf("The sum of the elements in the array is %d", sum);
	return 0;
}