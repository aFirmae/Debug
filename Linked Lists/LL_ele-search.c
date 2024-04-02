// 𝗦𝗲𝗮𝗿𝗰𝗵 𝗳𝗼𝗿 𝗮𝗻 𝗲𝗹𝗲𝗺𝗲𝗻𝘁 𝗶𝗻 𝗮 𝗹𝗶𝗻𝗸𝗲𝗱 𝗹𝗶𝘀𝘁.

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
    
    int i, j, num, key, nodes, count = 1, flag = 0;

    printf("\tCREATING A LINKED LIST.\n");
    printf("Number of nodes: ");
    scanf("%d", &nodes);

    for (i = 0; i < nodes; i++)
    {
        printf("Node %d: ", i + 1);
        scanf("%d", &num);
        append_node(num);
    }

    struct node *ptr = head;
    printf("Search For?: ");
    scanf("%d", &key);

    while (ptr != NULL)
    {
        if (ptr->data == key)
        {
            printf("%d found at node %d.", key, count);
            flag = 1;
        }
        count++;
        ptr = ptr->next;
    }
    if (!flag)
    {
        printf("%d key is not found.", key);
    }

    return 0;
}
