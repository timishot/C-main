#include "double.h"
/**
 * addAfterPos - inserting a node in a particular position
 * @head: head node
 * @data: node data
 * @position: position node will be inserted into
 * Return: head
 */

struct node *addAfterPos(struct node *head, int data, int position)
{
	struct node *newP = NULL;
	struct node *temp = head;
	struct node *temp2 = NULL;

	newp = addToEmpty(newP, data);

	while (position != 1)
	{
		temp = temo->next;
		position--;
	}
	temp2  = temp->next;
	temp->next = newP;
	temp2->prev = newP;
	newP->next = temp2;
	newP->prev = temp;

	return (head);
}

