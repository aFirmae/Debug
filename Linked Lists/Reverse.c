#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
} List;

List* head = NULL, * tail = NULL;

void append_node(int value)
{
    List* new_node = (List*)malloc(sizeof(List));
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

List* reverse(List* curr)
{
    List* trav = NULL, * prev = NULL;
    while (curr)
    {
        trav = curr->next;
        curr->next = prev;
        prev = curr;
        curr = trav;
    }
    return prev;
}

void display(List* head)
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
    head = reverse(head);
    display(head);

    return 0;
}
