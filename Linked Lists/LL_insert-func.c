#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head = NULL, *tail = NULL, *newNode = NULL;

void append_node(int data)
{
	newNode = (struct node *)malloc(sizeof(struct node));
	newNode->data = data;
	newNode->next = NULL;

	if (head == NULL)
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		tail->next = newNode;
		tail = newNode;
	}
}

void display(struct node *head)
{
	struct node *temp = head;
	while (temp != NULL)
	{
		printf("%d -> ", temp->data);
		temp = temp->next;
	}
	printf("Null\n");
}

void insert(int data, int pos)
{
	newNode = (struct node *)malloc(sizeof(struct node));
	newNode->data = data;
	newNode->next = NULL;

	if (pos == 1)
	{
		newNode->next = head;
		head = newNode;
	}
	else
	{
		struct node *temp = head;
		for (int i = 1; i < pos - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
		if (temp != NULL)
		{
			newNode->next = temp->next;
			temp->next = newNode;
		}
		else
		{
			printf("Invalid Position\n");
		}
	}
}

int main()
{
	int nodes, data, i, choice;
	printf("Nodes: ");
	scanf("%d", &nodes);

	for (i = 0; i < nodes; i++)
	{
		printf("Node %d: ", i + 1);
		scanf("%d", &data);
		append_node(data);
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
		insert(data, 1);
		break;
	}

	case 2:
	{
		printf("Enter data to add at the end: ");
		scanf("%d", &data);
		insert(data, nodes + 1);
		// append_node(data);
		break;
	}

	case 3:
	{
		int pos;
		printf("Enter Data to Add: ");
		scanf("%d", &data);
		printf("At Node: ");
		scanf("%d", &pos);
		insert(data, pos);
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