#include<stdio.h>
int main()
{
    char gender, name[20];
    printf("Enter your name- ");
    scanf("%[^\n]%*c", name); // allows to input space
    printf("Enter your gender: ");
    scanf(" %c", &gender);
    switch(gender)
    {
        case 'M':
        case 'm':
            printf("Your name is Mr.%s", name);
        break;

        case 'F':
        case 'f':
            printf("Your name is Miss.%s", name);
        break;

        default:
            printf("I guess you pefer not to say.");
    }
}
