//C program that prints all prime numbers between the specified limits provided by the user.
#include<stdio.h>
int main()
{
	int i, flag, low, up;
	printf("Enter the lower limit: ");
	scanf("%d",&low);
    redo:
    printf("Enter the upper limit: ");
	scanf("%d",&up);

    if(up<2 && up>low)
    {
        printf("Upper limit must be greater than or equal to 2!! Try again.\n");
        goto redo;
    }

    printf("Prime numbers between %d and %d are: \n", low, up);

    if(low>up)
    {
        low=low+up;
        up=low-up;
        low=low-up;
    }

	while(low<up)
    {
        flag=0;

        if(low<=1)
        {
            low++;
            continue;
        }

        for(i=2;i<=low/2;i++)
        {
            if(low%i == 0)
            {
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            printf("%d ",low);
        }
    low++;
    }
    return 0;
}
