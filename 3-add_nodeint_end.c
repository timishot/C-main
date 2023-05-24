#include "list.h"


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *ptr;

	new_node->n = n;
	new_node->next=NULL;

	if (new_node == NULL){
		return NULL;
	}

	if (*head == NULL){
		*head = new_node;
	}else{
		ptr = *head;
		while(ptr->next != NULL){
			ptr= ptr->next;
		}
		ptr->next =new_node;
	}

	return  new_node;
}
