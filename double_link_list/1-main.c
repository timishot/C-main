#include "double.h"

int main(void)
{
	struct node *head = NULL;
	head = addToEmpty(head, 45);
	printf("%d \n", head->data);

	return 0;
}
