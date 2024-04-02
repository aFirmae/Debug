#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Invalid input.\n");
        goto exit_program;
    }

    printf("The number is: %d\n", num);

    if (num % 2 == 0)
    {
        printf("It is an even number.\n");
        goto exit_program;
    }

    printf("It is an odd number.\n");

exit_program:
    printf("Exiting the program.\n");
    exit(0);
}
