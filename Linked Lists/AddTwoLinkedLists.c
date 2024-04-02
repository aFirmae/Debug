#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
} List;

List* head1 = NULL, * head2 = NULL;

void append_node(List** head, int value)
{
    List* new_node = (List*)malloc(sizeof(List));
    new_node->data = value;
    new_node->next = NULL;

    if (!*head)
    {
        *head = new_node;
    }
    else
    {
        List* tail = *head;
        while (tail->next)
        {
            tail = tail->next;
        }
        tail->next = new_node;
    }
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

List* addLinkedList(List* l1, List* l2)
{
    List* l3 = NULL;
    int sum, carry = 0, key;

    while (l1 || l2 || carry)
    {
        sum = carry;
        if (l1)
        {
            sum += l1->data;
            l1 = l1->next;
        }
        if (l2)
        {
            sum += l2->data;
            l2 = l2->next;
        }

        key = sum % 10;
        carry = sum / 10;

        append_node(&l3, key);
    }
    if (carry)
    {
        append_node(&l3, carry);
    }
    return l3;
}

int main()
{
    int value, nodes1, nodes2;

    printf("\n\nLinked List 1\n");
    printf("Enter number of nodes: ");
    scanf("%d", &nodes1);
    for (int i = 0; i < nodes1; i++)
    {
        printf("Node %d: ", i + 1);
        scanf("%d", &value);
        append_node(&head1, value);
    }

    printf("\n\nLinked List 2\n");
    printf("Enter number of nodes: ");
    scanf("%d", &nodes2);
    for (int i = 0; i < nodes2; i++)
    {
        printf("Node %d: ", i + 1);
        scanf("%d", &value);
        append_node(&head2, value);
    }

    printf("Linked List 1: ");
    display(head1);
    printf("\n\n");
    printf("Linked List 2: ");
    display(head2);
    printf("\n\n");

    List* head3 = addLinkedList(head1, head2);
    printf("Added Linked List: ");
    display(head3);

    return 0;
}
