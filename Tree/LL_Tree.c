#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
} Tree;

Tree* head = NULL, * tail = NULL;

Tree* create_node(int value)
{
    Tree* new_node = (Tree*)malloc(sizeof(Tree));

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Tree* insert(Tree* root, int data) 
{
    if (root == NULL) 
    {
        return createNode(data);
    }

    if (data < root->data) 
    {
        root->left = insert(root->left, data);
    }
    else if (data > root->data) 
    {
        root->right = insert(root->right, data);
    }

    return root;
}

void inorderTraversal(struct TreeNode* root) 
{
    if (root != NULL) 
    {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
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

    display(head);

    return 0;
}

