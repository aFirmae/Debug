#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
    struct node* prev;
} List;

List* head = NULL, * tail = NULL;

void append_node(int value)
{
    List* new_node = (List*)malloc(sizeof(List));
    new_node->data = value;
    new_node->next = NULL;
    new_node->prev = NULL;
    if (!head)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }
}

void display(List* trav)
{
    while (trav)
    {
        printf("%d -> ", trav->data);
        trav = trav->next;
    }
    printf("NULL\n");
}

void mid_ele(List* trav)
{
    int flag = 0;
    List* curr = trav, * dcurr = trav;
    while (dcurr)
    {
        if (!(dcurr->next))
        {
            flag = 1;
            break;
        }
        curr = curr->next;
        dcurr = dcurr->next->next;
    }
    if (!flag)
    {
        printf("Mid ele: %d, %d", curr->prev->data, curr->data);
    }
    else
    {
        printf("Mid ele: %d", curr->data);
    }
}

List* insert(List* trav, int value, int pos)
{
    List* new_node = (List*)malloc(sizeof(List));
    new_node->data = value;
    if (pos == 1)
    {
        trav->prev = new_node;
        new_node->next = trav;
        trav = new_node;
    }
    else
    {
        List* ptr = trav;
        for (int i = 1; i < pos - 1 && trav; i++)
        {
            ptr = ptr->next;
        }
        new_node->prev = ptr;
        new_node->next = ptr->next;
        if (ptr->next)
        {
            ptr->next->prev = new_node;
        }
        ptr->next = new_node;
    }

    return trav;
}

int main()
{
 #include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
    struct node* prev;
} List;

List* head = NULL, * tail = NULL;

void append_node(int value)
{
    List* new_node = (List*)malloc(sizeof(List));
    new_node->data = value;
    new_node->next = NULL;
    new_node->prev = NULL;
    if (!head)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }
}

void display(List* trav)
{
    while (trav)
    {
        printf("%d -> ", trav->data);
        trav = trav->next;
    }
    printf("NULL\n");
}

    printf("\nPress:\n");
    printf("1. Insert at the beginning.\n"
        "2. Insert at the end.\n"
        "3. Insert at a position at your choice.\n"
        "4. End the execution.\n");
    printf("\nChoice - ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        printf("Enter data to add at the start: ");
        scanf("%d", &data);
        head = insert(head, data, 1);
        break;
    }

    case 2:
    {
        printf("Enter data to add at the end: ");
        scanf("%d", &data);
        head = insert(head, data, nodes + 1);
        break;
    }

    case 3:
    {
        int pos;
        printf("Enter Data to Add: ");
        scanf("%d", &data);
        printf("At Node: ");
        scanf("%d", &pos);
        head = insert(head, data, pos);
        break;
    }

    case 4:
    {
        exit(0);
    }

    default:
    {
        printf("\nLinked List: ");
        display(head);
    }
    }

    printf("\nLinked List (After Insetion): ");
    display(head);

    return 0;
}
