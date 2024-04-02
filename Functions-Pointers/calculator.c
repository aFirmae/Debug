// 𝗖𝗮𝗹𝗰𝘂𝗹𝗮𝘁𝗼𝗿 𝘂𝘀𝗶𝗻𝗴 𝗳𝘂𝗻𝗰𝘁𝗶𝗼𝗻 𝗽𝗼𝗶𝗻𝘁𝗲𝗿𝘀

# include <stdio.h>

int add(int x, int y);
int sub(int x, int y);
int mult(int x, int y);
float div(int x, int y);
int rem(int x, int y);
int power(int x, int y);

int main()
{
    int num1, num2;
    char choice;

    int(*ptr1)(int, int) = &add;
    int(*ptr2)(int, int) = &sub;
    int(*ptr3)(int, int) = &mult;
    float(*ptr4)(int, int) = &div;
    int(*ptr5)(int, int) = &rem;
    int(*ptr6)(int, int) = &power;

    printf("Operator (+, -, *, /, %%, ^): ");
    scanf("%c", &choice);

    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);

    switch(choice)
    {
        case '+':
        {
            printf("Sum: %d", (*ptr1)(num1, num2));
            break;
        }
        case '-':
        {
            printf("Difference: %d", (*ptr2)(num1, num2));
            break;
        }
        case '*':
        {
            printf("Product: %d", (*ptr3)(num1, num2));
            break;
        }
        case '/':
        {
            printf("Quotient: %d", (int)(*ptr4)(num1, num2));
            break;
        }
        case '%':
        {
            printf("Remainder: %d", (*ptr5)(num1, num2));
            break;
        }
        case '^':
        {
            printf("%d^%d: %d", num1, num2, (*ptr6)(num1, num2));
            break;
        }
        default:
        {
            printf("%c is not a valid operator!", choice);
        }
    }

    return 0;
}

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return (x > y) ? (x - y) : (y - x);
}

int mult(int x, int y)
{
    return x * y;
}

float div(int x, int y)
{
    return (y == 0) ? -1 : ((float)x / y);
}

int rem(int x, int y)
{
    return x % y;
}

int power(int x, int y)
{
    if(y == 0)
    {
        return 1;
    }
    else
    {
        return x * power(x,  y - 1);
    }
}
