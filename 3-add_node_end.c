#include "list.h"

list_t *add_node_end(list_t **head, const char *str){
	list_t *new_node = malloc(sizeof(list_t));
	list_t *ptr;

	if (new_node == NULL)
		return NULL;
	new_node->str = strdup(str);
	if (new_node->str == NULL){
		free(new_node);
		return NULL;
	}
	new_node->len =strlen(str);
	new_node->next = NULL;

	if (*head == NULL){
		*head = new_node;
		return(new_node);
	}
	else{
		ptr = *head;
		while(ptr->next != NULL)
		{
			ptr=ptr->next;
		}
		ptr->next = new_node;
	}

	return new_node;
}
