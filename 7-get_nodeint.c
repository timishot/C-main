#include "list.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index){
	unsigned int  count = 0;

	listint_t *temp = head;

	while (temp!= NULL && index != 0){
		temp = temp->next;
		index--;
		count++
	}

	if (count < idx )
		return NULL;

	return temp;

}
