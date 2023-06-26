#include "double.h"
/**
 * main - main function for the double link list
 * @void: no parameter taken
 * Return: 0
 */

int main(void)
{
	struct node *head = NULL;
	struct node *ptr;

	head  = addToEmpty(head, 45);
	head = addAtBeg(head, 34);

	ptr = head;
	while (ptr != NULL)
	{
		printf("%d \n", ptr->data);
		ptr = ptr->next;
	}

	return (0);
}
