#include <stdio.h>
int str_len(char str[])
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return count;
}

int main()
{
    int count = 0;
    char name[100], buffer[100];
    printf("Enter a string: ");
    fgets(name, 100, stdin);
    name[str_len(name) - 1] = '\0';

    for (int i = str_len(name) - 1; i >= 0; i--)
    {
        buffer[count++] = name[i];
    }
    buffer[count] = '\0';

    printf("Reversed string is %s", buffer);
}