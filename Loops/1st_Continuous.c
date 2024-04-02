#include<stdio.h>
#include<string.h>

int main()
{
    int num, flag=0;
    char choice[3];
         
    printf("    \nCheck Odd or Even.\n");
    while(flag==0 || strcasecmp(choice, "Yes") == 0 || strcasecmp(choice, "Y") == 0)
    {
    printf("\nEnter a number: ");

    if(scanf("%d", &num) != 1)
    {
        printf("Invalid Input! Try again.\n");
        while(getchar() != '\n');
        continue;
    }

    flag=1;

    if(num)
    {
    switch(num%2==0)
    {
        case 1:
            printf("%d is an even number.\n", num);
        break;

        case 0:
            printf("%d is an odd number.\n", num);
        break;
    }
	}
	else 
    {
	    printf("The number you have entered is 0.\n");
    }

        printf("\nDo you want to check another number? (Yes/No)\n");
        scanf("%s", choice);

        while(strcasecmp(choice, "Y") != 0 && strcasecmp(choice, "N") != 0 && strcasecmp(choice, "Yes") != 0 && strcasecmp(choice, "No") != 0)
        {
            printf("Please enter (Yes/No) to continue.\n");
            scanf("%s", choice);
        }

    }
        printf("\nThank you.\n\n");    
    return 0;
} 