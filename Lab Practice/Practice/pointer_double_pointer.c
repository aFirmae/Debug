#include <stdio.h>
int op(int *a, int *b, int *c)
{
    int sum = 0, differ = 0, product = 0;
    sum = *a + *b;
    differ = *a - *b;
    product = *a * *b;
    *a = sum;
    *b = differ;
    *c = product;
}
int main()
{
    int num1, num2, multiplier;
    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);
    if (num1 < num2)
    {
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }
    op(&num1, &num2, &multiplier);
    printf("%d %d %d", num1, num2, multiplier);
    return 0;
}