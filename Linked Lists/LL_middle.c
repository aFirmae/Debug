// 𝗣𝗿𝗶𝗻𝘁 𝘁𝗵𝗲 𝗺𝗶𝗱𝗱𝗹𝗲 𝗲𝗹𝗲𝗺𝗲𝗻𝘁(𝘀) 𝗼𝗳 𝗮 𝗹𝗶𝗻𝗸𝗲𝗱 𝗹𝗶𝘀𝘁.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int i, j;
struct node *head = NULL, *newNode = NULL, *curr;

void append_node(int value)
{

    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    curr = head;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = newNode;
    }
}

int main()
{
    int nodes, value;

    printf("\tCREATING A LINKED LIST.\n");
    printf("Number of nodes: ");
    scanf("%d", &nodes);

    for (i = 0; i < nodes; i++)
    {
        printf("Node %d - ", i + 1);
        scanf("%d", &value);
        append_node(value);
    }

    struct node *ptr = head;
    for (j = 0; j < (i / 2) - 1; j++)
    {
        ptr = ptr->next;
    }

    if ((nodes % 2) != 0)
    {
        printf("Middle element: %d", ptr->next->data);
    }
    else
    {
        printf("Middle elements: Floor - %d, Ceiling - %d", ptr->data, ptr->next->data);
    }

    return 0;
}
