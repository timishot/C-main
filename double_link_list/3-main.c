#include "double.h"

/**
 * main - starting point of the code
 * @void: no parameters
 * Return: (0)
 */

int main(void)
{
	struct node *head = NULL;
	struct node *ptr;

	head = addToEmpty(head, 45);
	head = addAtBeg(head, 34);
	head = addAtEnd(head, 9);

	ptr = head;
	while (ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}

	return (0);

}
