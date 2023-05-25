#include "list.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index){

	listint_t *current= *head;
	listint_t *previous = *head;

	if (*head == NULL){
		return -1;
	}else if (index == 0){
		*head = current->next;
		free(current);
	}else
	{
		while(index!=0){
			previous = current;
			current= current->next;
			index--;
		}

		previous->next = current->next;
		free(current);
	}

	return 0;
}






