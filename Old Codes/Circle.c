//Write a program in C to find the circumference and area of a circle.
#include <stdio.h>
#define pi 3.1415926536
int main()
{
    float dia,radi;
    printf("Enter the diameter of the circle in centimeters- ");
    scanf("%f",&dia);
    radi=dia/2;
    printf("The circumference of the circle is: %f\n", 2*pi*radi);
    printf("The area of the circle is: %f\n",pi*radi*radi);
    return 0;
}