#include <stdio.h>
int str_len(char str[])
{
    int count = 0;
    while (str[count] != '\0') //*Took help from ChatGPT
    {
        count++;
    }
    return count;
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[str_len(str) - 1] = '\0';
    printf("The length of %s is %d\n", str, str_len(str));
    return 0;
}