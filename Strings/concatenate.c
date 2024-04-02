// Write a program in C to concatenate two strings.
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50];

    printf("Enter first string: ");
    fgets(str1, 50, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, 50, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    strcat(str1, str2);

    printf("Concatenated string is: %s", str1);

    return 0;
}
