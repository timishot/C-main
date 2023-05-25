#include "list.h"

void free_listint2(listint_t **head){

	listint_t *temp;

	temp = *head;

	while(temp != NULL){
		temp=temp->next;
		free(*head);
		*head = temp;
	}

	*head =NULL;
}
