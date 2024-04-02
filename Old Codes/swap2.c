//Write a program in C to swap two values without using third variable.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Before swapping, a = %d and b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping, a = %d and b = %d\n", a, b);
    return 0;
}