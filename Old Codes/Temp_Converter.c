//Write a program in С to convert Celsius to Fahrenheit or vice-versa.
#include<stdio.h>
int main()
{
int r_value;
float deg, degC, degF;
char temp;
    printf("What's the temperature?- ");
    r_value=scanf("%f", &deg);
if(r_value==1)
{
    printf("Is your temprature in Celcius or Fahrenheit?\n"
            "Enter 'C' if you wanna convert Celcius to Fahrenheit.\n"
            "Enter 'F' if you wanna convert Fahrenheit to Celcius.\n");
    scanf(" %c", &temp);
if(temp=='C' || temp=='c')
{
    degF=((deg*1.8)+32);
    printf("%.2f deg Celcius= %.2f deg Fahrenheit\n",deg, degF);
    printf("%.2f deg Celcius= %.3f deg Kelvin", deg, deg+273.15);
}
else if(temp=='F' || temp=='f')
{
    degC=(((deg-32)*5)/9);
    printf("%.2f deg Fahrenheit= %.2f deg Celcius\n",deg, degC);
    printf("%.2f deg Fahrenheit= %.3f deg Kelvin", deg, degC+273.15);
}
else
    printf("Invalid Input!!\nEnter either 'C' or 'F' to convert your desired temperature!");
}
else
    printf("Enter a valid temperature!!");
    return 0;
}
