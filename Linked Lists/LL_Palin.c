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

void display(List* ptr)
{
    while (ptr)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

List* copyList(List* head) {
    List* newHead = NULL, * tail = NULL;
    while (head) {
        List* newNode = (List*)malloc(sizeof(List));
        newNode->data = head->data;
        newNode->next = NULL;
        if (!newHead) {
            newHead = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
        head = head->next;
    }
    return newHead;
}

int isPalin(List* curr) {
    int flag = 1;
    List* trav = NULL, * prev = NULL, * ptr = copyList(head);
    while (curr) {
        trav = curr->next;
        curr->next = prev;
        prev = curr;
        curr = trav;
    }

    while (ptr && prev) {
        if (ptr->data != prev->data) {
            flag = 0;
            break;
        }
        ptr = ptr->next;
        prev = prev->next;
    }
    return flag;
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

    printf("Linked List is %spalindrome\n", isPalin(head) ? "" : "not ");

    return 0;
}
