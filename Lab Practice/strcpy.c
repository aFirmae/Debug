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
    char name[100], buffer[100];
    printf("Enter a string: ");
    fgets(name, 100, stdin);
    name[str_len(name) - 1] = '\0';

    for (int i = 0; i < str_len(name); i++)
    {
        buffer[i] = name[i];
    }
    buffer[str_len(name)] = '\0';

    printf("The copied string is: %s\n", buffer);
    return 0;
}