// Write a program in C to find the length of a string.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];

    printf("Enter a string: ");
    fgets(str, 50, stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    printf("Length of the string is: %d\n", len);

    return 0;
}
