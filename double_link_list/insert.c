#include <stdio.h>
#include "double.h"

struct node* add_beg(struct node* head, int d)
{
	struct node *ptr = malloc(sizeof(struct node));
	ptr->data = d;
	ptr->link =NULL;

	ptr->link =head;
	head = ptr;
	return head;
};

