// 𝗜𝗺𝗽𝗹𝗲𝗺𝗲𝗻𝘁𝗶𝗻𝗴 𝗦𝘁𝗮𝗰𝗸 𝘂𝘀𝗶𝗻𝗴 𝗔𝗿𝗿𝗮𝘆.

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int num)
{
    if (top == MAX_SIZE - 1)
    {
        return;
    }
    else
    {
        top = top + 1;
        stack[top] = num;
        printf("Pushed %d onto the stack.\n", num);
    }
}

void pop()
{
    if (top == -1)
        printf("Stack is empty\n");
    else
    {
        printf("Popped %d from the stack.\n", stack[top]);
        stack[top] = 0;
        top--;
    }
}

void display()
{
    int i;
    if (top >= 0)
    {
        printf("Stack elements: ");
        for (i = top; i > -1; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
    else
        printf("Stack is empty\n");
}

int main()
{
    int size, choice, num;

    printf("Enter the size of the stack (up to %d): ", MAX_SIZE);
    scanf("%d", &size);

    if (size > MAX_SIZE || size <= 0)
    {
        printf("Invalid stack size. Please choose a size between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    while (1)
    {
        printf("\nStack Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (top < size - 1)
            {
                printf("Enter the number to push onto the stack: ");
                scanf("%d", &num);
                push(num);
            }
            else
            {
                printf("Stack is full. Cannot push.\n");
            }
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Exiting the program.\n");
            exit(0);

        default:
            printf("Invalid choice. Please choose a valid option.\n");
        }
    }

    return 0;
}
