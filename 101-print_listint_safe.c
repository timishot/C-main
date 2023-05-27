#include "list.h"

size_t print_listint_safe(const listint_t *head){

	size_t count = 0;
	const listint_t *slow, *fast, *loop_start = NULL, *loop_end =NULL;

	if (head == NULL)
		return (0);

	slow =head;
	fast= head->next;

	while(fast!=NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

		if (slow == fast)
		{
			loop_start = slow;
			break;
		}

		slow=slow->next;
		fast=fast->next->next;
	}
	if (loop_start != NULL){
		loop_end = slow;
		printf("Loop starts at: [%p] %d\n", (void *)loop_start, loop_start->n);
		printf("Loop ends at: [%p] %d\n", (void *)loop_end, loop_end->n);
		exit(98);
	}

	/*Print the last node and update the count*/
	printf("[%p] %d\n", (void *)slow, slow->n);
	count++;

	return (count);
}



