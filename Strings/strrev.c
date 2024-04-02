#include <stdio.h>

int strlength(char str[])
{
    int count = 0;
    while(str[count] != '\0')
    {
        count++;
    }
    return count;
}

void strcopy(char str1[], char str2[])
{
    for(int i = 0; i < strlength(str2); i++)
    {
        str1[i] = str2[i];
    }
}

void strreverse(char str[])
{
    int length = strlength(str);
    int count = length - 1;
    for (int i = 0; i < length / 2; i++, count--)
    {
        char temp = str[i];
        str[i] = str[count];
        str[count] = temp;
    }
}

int main()
{
    char str[256], copy[256];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlength(str) - 1] = '\0';
    strcopy(copy, str);
    strreverse(str);

    printf("%s is%s a palindromic string.", copy, (strcmpi(copy, str) == 0) ? "" : " not");

    return 0;
}
