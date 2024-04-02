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
        head = tail = new_node;
    }
    else
    {
        tail->next = new_node;
        tail = new_node;
    }
}

void display(List *ptr)
{
    while (ptr)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void swap_data(List *a, List *b)
{
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

// void bubble(List *trav) 
// {
//     List *ptr, *temp;
//     for (ptr = trav; ptr->next != NULL; ptr = ptr->next)
//     {
//         for (temp = ptr->next; temp != NULL; temp = temp->next)
//         {
//             if (ptr->data > temp->data)
//             {
//                 swap_data(ptr, temp);
//             }
//         }
//     }
// }

void bub(int n)
{
    List *ptri = head, *ptrj = head;
    for(int i = 1; i <= n; i++)
    {
        display(head);
        int k = 1;
        while(k <= i)
        {
            ptri = ptri->next;
            k++;
            printf("k = %d\n", k);
        }
        for(int j = 1; j <= n - i; j++)
        {
            display(head);
            int l = 1;
            while(l <= j)
            {
                ptrj = ptrj->next;
                l++;
                printf("l = %d\n", l);
            }
            if(ptrj->data < ptri->data)
            {
                swap_data(ptri, ptrj);
            }
        }
    }
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
    bub(nodes);
    display(head);
    return 0;
}
