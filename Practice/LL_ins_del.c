#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next,*left;

} List;

List *head = NULL, *tail = NULL;

void add_node(int value)
{
    List *new_node = (List *)malloc(sizeof(List));
    new_node->data = value;
    new_node->next = NULL;

    if (!head)
    {
        head = tail = new_node;
    }
    else
    {
        tail->next = new_node;
        tail = new_node;
    }
}

void ins(int value, int pos)
{
    int count = 0;
    List *new_node = (List *)malloc(sizeof(List));
    new_node->data = value;
    if (pos == 1)
    {
        new_node->next = head;
        new_node->left = NULL;
        head = new_node;
    }
    else
    {
        List *trav = head;
        while (trav && count++ < pos - 2)
        {
            trav = trav->next;
        }
        if (trav)
        {
            new_node->left = trav;
            trav->next->left = new_node;
            new_node->next = trav->next;
            trav->next = new_node;
        }
        else
        {
            printf("Invalid Position!!");
        }
    }
}

void del(int pos)
{
    if (pos == 1)
    {
        if (head->next == NULL)
        {
            free(head);
        }
        else
        {
            List *curr = head;
            head = head->next;
            free(curr);
        }
    }
    else
    {
        int count = 0;
        List *curr = head, *trav = head->next;
        while (trav && count++ < pos - 2)
        {
            curr = trav;
            trav = trav->next;
        }
        if (trav)
        {
            curr->next = trav->next;
            free(trav);
        }
        else
        {
            printf("Invalid Position!!");
        }
    }
}

void display(List *trav)
{
    while (trav)
    {
        printf("%d -> ", trav->data);
        trav = trav->next;
    }
    printf("NULL\n");
}

int main()
{
    int nodes, value;
    printf("Nodes: ");
    scanf("%d", &nodes);
    for (int i = 0; i < nodes; i++)
    {
        printf("Node %d: ", i + 1);
        scanf("%d", &value);
        add_node(value);
    }
    del(6);
    display(head);

    return 0;
}
