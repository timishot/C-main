#include "double.h"

struct node *addToEmpty(struct node *head, int data)
{
	struct node *temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	head = temp;
	return head;
}
