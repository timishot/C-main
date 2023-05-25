#include "list.h"

int pop_listint(listint_t **head){

	listint_t *temp;
	listint_t *data = *head;

	int n = data->n;

	temp= (*head)->next;
	free(*head);
	*head = temp;

	return (n);


}




