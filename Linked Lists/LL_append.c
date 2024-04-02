#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    int i, num, value, nodes, choice;
    struct node *head = NULL;
    struct node *new_node, *curr;

    printf("\tCREATING A LINKED LIST.\n");
    printf("Number of nodes: ");
    scanf("%d", &nodes);

    for (i = 0; i < nodes; i++)
    {
        new_node = (struct node *)malloc(sizeof(struct node));

        printf("Node %d: ", i + 1);
        scanf("%d", &num);
        new_node->data = num;
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

    struct node *ptr = head;
    printf("\nLinked List:\n");
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}
