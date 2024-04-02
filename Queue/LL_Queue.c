// 𝗜𝗺𝗽𝗹𝗲𝗺𝗲𝗻𝘁 𝗮 𝗾𝘂𝗲𝘂𝗲 𝘂𝘀𝗶𝗻𝗴 𝗹𝗶𝗻𝗸𝗲𝗱 𝗹𝗶𝘀𝘁.

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} List;

List *head = NULL, *tail = NULL;

void enqueue(int value)
{
    List *new_node = (List *)malloc(sizeof(List));
    new_node->data = value;
    new_node->next = NULL;
    if (!head)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->next = new_node;
        tail = new_node;
    }
}

int dequeue()
{
    if (!head)
    {
        printf("Queue is Empty.\n");
        return 0;
    }
    List *curr = head;
    int data = curr->data;
    head = head->next;
    free(curr);

    return data;
}

void display(List *curr)
{
    while (curr)
    {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}

int main()
{
    int choice, num;

    while (1)
    {
        printf("\nQueue Menu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("Enter the number to Enqueue onto the queue: ");
            scanf("%d", &num);
            enqueue(num);
            break;

        case 2:
            if (!head)
            {
                printf("Queue is Empty.\n");
            }
            else
            {
                printf("Dequeued %d from the queue.\n", dequeue());
            }
            break;

        case 3:
            display(head);
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