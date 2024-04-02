#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int stack[MAX], top = -1;

int precedence(char operator)
{
    if (operator== '^' || operator== '$')
    {
        return 3;
    }
    else if (operator== '*' || operator== '/')
    {
        return 2;
    }
    else if (operator== '+' || operator== '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int num)
{
    if (top == MAX)
    {
        return;
    }
    else
    {
        top++;
        stack[top] = num;
    }
}

int pop()
{
    if (top == -1)
    {
        return -1;
    }
    else
    {
        int item = stack[top];
        stack[top] = 0;
        top--;
        return item;
    }
}

char* strrev(char* str)
{
    char* p1, * p2;

    if (!str || !*str)
    {
        return str;
    }

    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
    {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }

    return str;
}

void infixToPostfix(char infix[])
{
    char postfix[MAX];
    int i, j = 0;

    for (i = 0; infix[i] != '\0'; i++)
    {
        char token = infix[i];

        if (token >= 'A' && token <= 'Z' || token >= 'a' && token <= 'z')
        {
            postfix[j++] = token;
        }
        else if (token == '(')
        {
            push(token);
        }
        else if (token == ')')
        {
            while (stack[top] != '(')
            {
                postfix[j++] = pop();
            }
            pop();
        }
        else
        {
            while (top != -1 && precedence(token) <= precedence(stack[top]))
            {
                postfix[j++] = pop();
            }
            push(token);
        }
    }

    while (top != -1)
    {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';
    printf("Postfix Expression: %s\n", postfix);
}

void infixToPrefix(char infix[])
{
    infix = strrev(infix);
    char prefix[MAX];
    int i, j = 0;

    for (i = 0; infix[i] != '\0'; i++)
    {
        char token = infix[i];

        if (token == '(')
        {
            token = ')';
        }
        else if (token == ')')
        {
            token = '(';
        }

        if (token >= 'A' && token <= 'Z' || token >= 'a' && token <= 'z')
        {
            prefix[j++] = token;
        }
        else if (token == '(')
        {
            push(token);
        }
        else if (token == ')')
        {
            while (stack[top] != '(')
            {
                prefix[j++] = pop();
            }
            pop();
        }
        else
        {
            while (top != -1 && precedence(token) < precedence(stack[top]))
            {
                prefix[j++] = pop();
            }
            push(token);
        }
    }

    while (top != -1)
    {
        prefix[j++] = pop();
    }

    prefix[j] = '\0';
    printf("Prefix Expression: %s\n", strrev(prefix));
    infix = strrev(infix);
}

int main()
{
    char infix[MAX];
    int choice, count = 0;

    printf("Enter an infix expression: ");
    scanf("%s", infix);

    while (count++ < 2)
    {
        printf("\nPress: \n"
            "1. Infix to Postfix.\n"
            "2. Infix to Prefix.\n"
            "3. Exit\n");
        printf("Choice - ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            infixToPostfix(infix);
            break;

        case 2:
            infixToPrefix(infix);
            break;

        case 3:
            exit(0);
        }
    }

    return 0;
}