#include <stdio.h>
int main()
{
	int i,a,b;
    printf("\nEnter a number for whose table you want to know? \n");
    scanf("%d",&a);
    printf("\nUp to what multiple would you like the table to be? \n");
    scanf("%d",&b);
    printf(" \n");
    for(i=1;i<=b;i++)
    {
    printf("%d*%d=%d\n",a,i,a*i);
    }
    printf("\n");
    return 0;
}