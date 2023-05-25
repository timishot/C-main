#include "list.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n){

	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = *head;

	if (new_node == NULL)
		return NULL;
	new_node->n =n;	
	new_node->next =NULL;


	while(idx != 1){
		current= current->next;
		idx--;
	}

	new_node->next = current->next;
	current->next =new_node;

	return new_node;
}
		


