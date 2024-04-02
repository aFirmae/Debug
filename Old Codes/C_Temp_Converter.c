#include<stdio.h>
#define black     "\x1b[30m"
#define red       "\x1b[31m"
#define green     "\x1b[32m"
#define yellow    "\x1b[33m"
#define blue      "\x1b[34m"
#define magenta   "\x1b[35m"
#define cyan      "\x1b[36m"
#define white     "\x1b[37m"
#define b_black   "\x1b[1;30m"
#define b_red     "\x1b[1;31m"
#define b_green   "\x1b[1;32m"
#define b_yellow  "\x1b[1;33m"
#define b_blue    "\x1b[1;34m"
#define b_magenta "\x1b[1;35m"
#define b_cyan    "\x1b[1;36m"
#define b_white   "\x1b[1;37m"
#define end       "\x1b[0m"
int main()
{
int r_value;
float deg, degC, degF;
char temp;
    printf("%sWhat's the temperature?- %s",b_yellow, end);
    r_value=scanf("%f", &deg);
if(r_value==1)
{
    printf("%sIs your temprature in Celcius or Fahrenheit?%s\n%sEnter%s %s'C'%s %sif you wanna convert Celcius to Fahrenheit.%s\n%sEnter%s %s'F'%s %sif you wanna convert Fahrenheit to Celcius.%s\n",b_magenta, end, cyan, end, green, end, cyan, end,cyan, end, green, end, cyan, end);
    scanf(" %c", &temp);
if(temp=='C' || temp=='c')
{
    degF=((deg*1.8)+32);
    printf("%s%.2f%s %sdeg Celcius%s= %s%.2f%s %sdeg Fahrenheit%s\n",magenta,deg,end,blue,end,magenta,degF,end,blue,end);
    printf("%s%.2f%s %sdeg Celcius%s= %s%.3f%s %sdeg Kelvin%s",magenta,deg,end,blue,end,magenta,deg+273.15,end,blue,end);
}
else if(temp=='F' || temp=='f')
{
    degC=(((deg-32)*5)/9);
    printf("%s%.2f%s %sdeg Fahrenheit%s= %s%.2f%s %sdeg Celcius%s\n",magenta,deg,end,blue,end,magenta,degC,end,blue,end);
    printf("%s%.2f%s %sdeg Fahrenheit%s= %s%.3f%s %sdeg Kelvin%s",magenta,deg,end,blue,end,magenta,degC+273.15,end,blue,end);
}
else
    printf("%sInvalid Input!!%s\n%sEnter either%s %s'C%s' %sor%s %s'F'%s %sto convert your desired temperature!%s",b_red,end,yellow,end,b_green,end,yellow,end,b_green,end,yellow,end);
}
else
    printf("%sEnter a valid temperature!!%s", b_red, end);
    return 0;
}