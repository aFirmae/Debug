// 𝗥𝗲𝘃𝗲𝗿𝘀𝗮𝗹 𝗼𝗳 𝗮 𝗟𝗶𝗻𝗸𝗲𝗱 𝗟𝗶𝘀𝘁

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int i, j;
struct node *head = NULL, *curr, *ptr = NULL, *new_node = NULL;

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
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

struct node *reverse(struct node *head)
{
    curr = head;
    while (curr != NULL)
    {
        new_node = curr->next;
        curr->next = ptr;
        ptr = curr;
        curr = new_node;
    }
    return ptr;
}

int main()
{
    int i, num, nodes;
    printf("\n\tCREATING A LINKED A LINKED LIST.\n");
    printf("Number of nodes: ");
    scanf("%d", &nodes);

    for (i = 0; i < nodes; i++)
    {
        printf("Node %d: ", i + 1);
        scanf("%d", &num);
        append_node(num);
    }
    
    printf("\nCreated Linked List.\n");
    display(head);
    head = reverse(head);

    printf("\nReversed Linked List.\n");
    display(head);

    return 0;
}
