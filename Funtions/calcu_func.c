#include <stdio.h>
#include <math.h>

double calculator(double x, double y, char z);

int main()
{
    double num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Enter operator: ");
    scanf(" %c", &op);

    result = calculator(num1, num2, op);
    if (isnan(result))
    {
        printf("\nTry again.\n");
    }
    else
    {
        printf("Result is %.2lf\n", result);
    }

    return 0;
}

double calculator(double x, double y, char z)
{
    switch (z)
    {
    case '+':
        return x + y;
        break;
    case '-':
        return (x >= y) ? (x - y) : (y - x);
        break;
    case '*':
        return x * y;
        break;
    case '/':
        if (y != 0)
        {
            return x / y;
        }
        else
        {
            printf("Division by zero is incompatible!");
        }
        break;
    default:
        printf("Invalid operation!");
        break;
    }
    return NAN;
}
