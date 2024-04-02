#include <stdio.h>
#include <stdlib.h>
void operation(int *a, int *b)
{
    int sum = 0, diff = 0;
    sum = *a + *b;
    diff = abs(*a - *b);
    *a = sum;
    *b = diff;
}
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    operation(&num1, &num2);
    printf("Sum = %d\n", num1);
    printf("Diff = %d\n", num2);
    printf("\n");
    return 0;
}