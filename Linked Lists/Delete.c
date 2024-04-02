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

List *delete(List *trav, int pos)
{
    if (pos == 1)
    {
        if (!(trav->next))
        {
            head = NULL;
            free(trav);
        }
        else
        {
            List *temp = trav;
            trav = trav->next;
            head = trav;
            free(temp);
        }
    }
    else
    {
        List *ptr = trav, *del = NULL;
        for (int i = 1; i < pos && ptr; i++)
        {
            del = ptr;
            ptr = ptr->next;
        }
        if (ptr)
        {
            del->next = ptr->next;
            free(ptr);
        }
        else
        {
            printf("Invalid Position!\n");
        }
    }
    return trav;
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
    int value, nodes, choice;
    printf("Nodes: ");
    scanf("%d", &nodes);

    for (int i = 0; i < nodes; i++)
    {
        printf("Node %d: ", i + 1);
        scanf("%d", &value);
        append_node(value);
    }

    if(!head)
    {
        printf("Nothin' to delete!");
        return 0;
    }

    printf("\nPress:\n");
    printf("1. Delete from the beginning.\n"
           "2. Delete from the end.\n"
           "3. Delete from a position at your choice.\n"
           "4. End the execution.\n");
    printf("\nChoice - ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        delete (head, 1);
        break;
    case 2:
        delete (head, nodes);
        break;
    case 3:
    {
        int pos;
        printf("Delete Node: ");
        scanf("%d", &pos);
        delete (head, pos);
        break;
    }
    case 4:
        exit(0);  
    }

    printf("\nLinked List: ");
    display(head);

    return 0;
}
