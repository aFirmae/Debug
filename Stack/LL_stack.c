#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int i;
struct node *head = NULL, *curr, *top = NULL, *new_node = NULL;

void append_node(int value)
{
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = NULL;
    curr = head;

    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = new_node;
    }
}

void display(struct node *head)
{
    struct node *ptr = head;
    printf("\n\tLinked List:\n");
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void push(int value)
{
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = top;
    top = new_node;
}

void pop()
{
    if(top == NULL)
    {
        printf("Stack underflow\n");
        return;
    }
    curr = top;
    top = top -> next;
    free(curr);
}

int main()
{
    int i, num, nodes;

    printf("\tCREATING A LINKED LIST.\n");
    printf("Number of nodes: ");
    scanf("%d", &nodes);

    for (i = 0; i < nodes; i++)
    {
        printf("Node %d: ", i + 1);
        scanf("%d", &num);
        append_node(num);
    }
    top = head;
    display(top);

    return 0;
}
