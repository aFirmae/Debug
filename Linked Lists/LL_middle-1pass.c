// 𝗣𝗿𝗶𝗻𝘁 𝘁𝗵𝗲 𝗺𝗶𝗱𝗱𝗹𝗲 𝗲𝗹𝗲𝗺𝗲𝗻𝘁 𝗼𝗳 𝗮 𝗹𝗶𝗻𝗸𝗲𝗱 𝗹𝗶𝘀𝘁 𝗶𝗻 𝗮 𝘀𝗶𝗻𝗴𝗹𝗲 𝗽𝗮𝘀𝘀.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL, *new_node, *curr;

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

int main()
{
    int i, j, num, key, nodes, flag = 0;

    printf("\tCREATING A LINKED LIST.\n");
    printf("Number of nodes: ");
    scanf("%d", &nodes);

    for (i = 0; i < nodes; i++)
    {
        printf("Node %d: ", i + 1);
        scanf("%d", &num);
        append_node(num);
    }

    curr = head;
    struct node *dcurr = head;

    while (dcurr != NULL)
    {
        if (dcurr->next == NULL)
        {
            flag = 1;
            break;
        }

        curr = curr->next;
        dcurr = dcurr->next->next;
    }
    
    if (flag)
        printf("Middle element: %d", curr->data);
    else
        printf("Middle element: Ceiling - %d", curr->data);

    return 0;
}
