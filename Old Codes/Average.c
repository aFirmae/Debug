//Write a program in C to find the average of 3 float numbers.
#include<stdio.h>
int main()
{
    float x, y, z, avg;
    printf("Enter the 3 numbers you want to average- \n");
    scanf("%f %f %f", &x, &y, &z);
    avg= (x+y+z)/3;
    printf("The average of %.3f, %.3f and %.3f is- %.4f", x, y, z, avg);
    return 0;
}