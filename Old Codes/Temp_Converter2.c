//Write a program in С to convert Celsius to Fahrenheit or vice-versa.
#include<stdio.h>
int main()
{
    float t, F, C;
    char choice;
    printf("Enter your temperature: ");
    int value= scanf("%f", &t);
    if (value)
    {
        printf("Enter 'C' if temperature is in Celcius. \nEnter 'F' if temperature is in Fahrenheit. \n");
        scanf(" %c", &choice);
    switch(choice)
    {
        case 'F' :
        case 'f' :
        C=(((t-32)*5)/9);
            printf("The temperature in Celcius is: %.3f", C);
        break;

        case 'C' :
        case 'c' :
        F=(t*1.8)+32;
            printf("The temperature in Fahrenheit is: %.3f", F);
        break;

        default:
            printf("Invalid Input!!\nEnter either 'C' or 'F' to convert your desired temperature!");
    }
    }
    else
        printf("Please enter a valid temperature!");
   return 0;
}
