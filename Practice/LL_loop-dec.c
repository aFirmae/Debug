#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
} List;

List *head = NULL, *tail = NULL;

List* create_node(int data)
{
    List* new_node = (List*)malloc(sizeof(List));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void add_node(int data)
{
    List* new_node = create_node(data);
    if (head == NULL)
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

void display(List *curr)
{
    while(curr)
    {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}

void detect_loop(List *trav)
{
    List *slow = trav, *fast = trav;
    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            printf("Loop detected\n");
            return;
        }
    }
    printf("No loop detected\n");
}

int main()
{
    int nodes, value;
    printf("Enter the number of nodes: ");
    scanf("%d", &nodes);

    for (int i = 0; i < nodes; i++)
    {
        printf("Node %d: ", i + 1);
        scanf("%d", &value);
        add_node(value);
        // tail->next = head->next;
    }

    // display(head);
    detect_loop(head);

    return 0;
}