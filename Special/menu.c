#include <stdio.h>
#include <stdlib.h>

int factorial(int);
int isPrime(int);
int odd_even(int);
int menu_driver(int, int);

int main()
{
    int choice = 0, flag = 0, temp = 1;
    char ch;
    printf("\n");
    printf("Press %d for factorial.\n", ++choice);
    printf("Press %d for prime.\n", ++choice);
    printf("Press %d for odd or even.\n", ++choice);
    printf("Press any other number to exit.\n ");

    printf("\n");

    printf("Your choice (1/2/3): ");
    scanf("%d", &choice);

    while (flag == 0 || ch == 'Y' || ch == 'y')
    {
        menu_driver(choice, temp);
        temp = 0;

        printf("\nChoose again? (Y/N): ");
        scanf(" %c", &ch);
        if (ch == 'Y' || ch == 'y')
        {
            printf("\nYour choice (1/2/3): ");
            scanf("%d", &choice);
            flag = 1;
        }
        else if (ch == 'N' || ch == 'n')
        {
            return 0;
        }
        else
        {
            while (ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n')
            {
                printf("\nEnter either (Y/N): ");
                scanf(" %c", &ch);
            }

            if (ch != 'N' && ch != 'n')
            {
                printf("\nYour choice (1/2/3): ");
                scanf("%d", &choice);
                flag = 1;
            }
            flag = 1;
        }
    }

    printf("\n");
    return 0;
}

int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

int isPrime(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 1;
        }
    }
    return 0;
}

int odd_even(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    return 0;
}

int menu_driver(int choice, int flag)
{
    unsigned int num;
    switch (choice)
    {
    case 1:
        printf("Current choice : Factorial of a number\n");
        printf("Number: ");
        scanf("%d", &num);
        if (num > 12)
        {
            printf("Out of memory range of 'int'\n");
        }
        else
        {
            printf("Factorial of %d is %d\n", num, factorial(num));
        }
        break;

    case 2:
        printf("Current choice : Prime number\n");
        printf("Number: ");
        scanf("%d", &num);
        while (num == 1 || num == 0)
        {
            printf("%d is neither prime nor composite.\n", num);
            printf("Try another number: ");
            scanf("%d", &num);
        }
        printf("%d is%s a prime number.\n", num, (isPrime(num) == 0) ? "" : " not");
        break;

    case 3:
        printf("Current choice : Odd or Even number\n");
        printf("Number: ");
        scanf("%d", &num);
        printf("The number %d is %s\n", num, (odd_even(num) == 1) ? "even." : "odd.");
        break;

    default:
        printf("Why did you even run the program? -_-\n");
        if (flag == 0)
        {
            printf("Could've just pressed 'N' -_-\n\n");
        }
        else
        {
            printf("\n");
        }
        exit(0);
    }
    return 0;
}