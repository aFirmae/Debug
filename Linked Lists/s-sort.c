// 𝗦𝗲𝗹𝗲𝗰𝘁𝗶𝗼𝗻 𝗦𝗼𝗿𝘁 𝗼𝗻 𝗮 𝗟𝗶𝗻𝗸𝗲𝗱 𝗟𝗶𝘀𝘁

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} List;

List *head = NULL, *tail = NULL;

void append_node(int value)
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

void swap_data(List *a, List *b)
{
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

List *min(List *head)
{
    List *trav = head, *min_node = trav;
    int smol = trav->data;
    while (trav)
    {
        if ((trav->data) <= smol)
        {
            smol = trav->data;
            min_node = trav;
        }
        trav = trav->next;
    }
    return min_node;
}

void sort(List *head)
{
    List *trav = head, *min_node;

    while (trav)
    {
        min_node = min(trav);
        swap_data(trav, min_node);
        trav = trav->next;
    }
}

void display(List *head)
{
    while (head)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main()
{
    int value, nodes;
    printf("Nodes: ");
    scanf("%d", &nodes);

    for (int i = 0; i < nodes; i++)
    {
        printf("Node %d: ", i + 1);
        scanf("%d", &value);
        append_node(value);
    }

    printf("\nCreated Linked List.\n");
    display(head);
    sort(head);

    printf("\nSorted Linked List.\n");
    display(head);

    return 0;
}
