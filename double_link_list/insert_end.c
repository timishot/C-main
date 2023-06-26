#include "double.h"

/**
 * addAtEnd - a fuc=nction for adding a node at the end of a list
 * @head: the first node
 * @data: the node data
 * Return:  head
 */

struct node *addAtEnd(struct node *head, int data)
{
	struct node *temp, *tp;

	temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	tp = head;

	while (tp->next != NULL)
		tp = tp->next;
	tp->next = temp;
	temp->prev = tp;


	return (head);
}
