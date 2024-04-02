#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[50], rev_str[50];

    printf("Enter a string: ");
    fgets(str, 50, stdin);

    // Remove trailing newline character
    str[strcspn(str, "\n")] = '\0';

    // Convert to lowercase
    for (int i = 0; str[i]; i++)
    {
        str[i] = tolower(str[i]);
    }

    strcpy(rev_str, str);
    strrev(rev_str);

    if (strcmp(str, rev_str) == 0)
    {
        printf("%s is a palindrome.\n", str);
    }
    else
    {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
