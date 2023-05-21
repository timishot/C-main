#include "list.h"

list_t *add_node_end(list_t **head, const char *str){
	list_t *new_node = malloc(sizeof(list_t));
	list_t *ptr;
	ptr= *head;
	if (*head == NULL){
		return NULL;
	}
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	ptr->next =new_node;	
	return new_node;
}
