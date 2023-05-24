#include "list.h"

listint_t *add_nodeint(listint_t **head, const int n){

	listint_t *ptr = malloc(sizeof(listint_t));
	ptr->n=n;

	if(ptr == NULL){
		return NULL;
	}
	ptr->next = *head;
	*head = ptr;

	return ptr;
}



