//WAP in C to copy all the elements of one array to another.

#include <stdio.h>
int main()
{
	int n, i, sum=0;
	printf("\n\n\tEnter the size of the array 'a': ");
	scanf("%d", &n);
	int a[n], b[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
		b[i]=a[i];		
	}
	printf("\n\tTransferring to array 'b'\n\n");
	for(i=0;i<n;i++)
	{
		printf("b[%d]= %d\n", i, b[i]);
	}
	return 0;
}