#include<stdio.h>
int main()
{
    int num, check;
    printf("Enter a number: ");
    scanf("%d", &num);

    check=(num%2==0);

    if(num!=0)
    {
    switch(check)
    {
        case 1:
            printf("%d is an even number.", num);
        break;

        case 0:
            printf("%d is an odd number.", num);
        break;
        
        default:
         	printf("Invalid Input!");
    }
	}
	else 
	printf("The number you have entered is 0.");
}
