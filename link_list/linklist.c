#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
} Node;


int main()
{
	Node *head = NULL;
	Node *new_node = malloc(sizeof(Node)); //Allocated memory for new_node

	if (new_node == NULL) 
	{
		printf("Error: memory allocation failed\n");
		return 1;
	}

	new_node->data = 5;
	new_node->next = head;
	head = new_node;

	return 0;
}
