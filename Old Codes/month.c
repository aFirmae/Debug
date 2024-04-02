#include<stdio.h>
int main()
{
    char monthnum;
    printf("Enter number of month- ");
    int numcheck= scanf("%d", &monthnum);
    
    if(numcheck)
    {
    switch(monthnum)
    {
        case 1:
            printf("January");
        break;

        case 2:
            printf("February");
        break;
		
		case 3:
            printf("March");
        break;
        
        case 4:
            printf("April");
        break;
        
        case 5:
            printf("May");
        break;
        
        case 6:
            printf("June");
        break;
        
        case 7:
            printf("July");
        break;
        
        case 8:
            printf("August");
        break;
        
        case 9:
            printf("September");
        break;
        
        case 10:
            printf("October");
        break;
        
        case 11:
            printf("November");
        break;
        
        case 12:
            printf("December");
        break;
        
        default:
        	if(monthnum<0)
            	printf("Month can't be negative.");
            else if(monthnum>12)
            	printf("There are only 12 months.");
            else
            	printf("0 really..?");
    }
	}
    else
    	printf("Hey! That's not a number.'");
    return 0;
}

