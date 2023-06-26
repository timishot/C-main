#include <stdio.h>
#include "double.h"

/**
 * addAtBeg - a function for add a node in the beginning of node
 * @head: the head node
 * @data: the data stored in the node
 * Return: head
 */

struct node  *addAtBeg(struct node *head, int data)
{
	struct node *temp = malloc(sizeof(struct node));

	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	temp->next = head;
	head->prev = temp;
	head = temp;

	return (head);
}

