#include <stdio.h>

char lwrcase(char);
void reverse(char[]);
int length(char[]);
void copy(char[], char[]);
int compare(char[], char[]);

int main()
{
    char str1[256], str2[256];
    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[length(str1) - 1] = '\0';

    copy(str1, str2); // Copies str1 to str2
    reverse(str2);
    printf("%s is%s a palindromic string.", str1, (compare(str1, str2) == 0) ? "" :" not");

    return 0;
}

void reverse(char array[])
{
    int len = length(array);
    int start = 0;
    int end = len - 1;

    while (start < end)
    {
        char temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        start++;
        end--;
    }
}

int length(char array[])
{
    int count = 0;
    while (array[count] != '\0')
    {
        count++;
    }
    return count;
}

void copy(char array1[], char array2[])
{
    int count = 0;
    while (array1[count] != '\0')
    {
        array2[count] = array1[count];
        count++;
    }
    array2[count] = '\0';
}

char lwrcase(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c + ('a' - 'A');
    return c;
}

int compare(char str1[], char str2[])
{
    int i = 0;
    while (lwrcase(str1[i]) == lwrcase(str2[i]))
    {
        if (str1[i] == '\0')
            return 0;
        i++;
    }
    return lwrcase(str1[i]) - lwrcase(str2[i]);
}
