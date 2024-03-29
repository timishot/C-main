#include "list.h"

list_t *add_node(list_t **head, const char *str){
	list_t *new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return NULL;
	new_node->str= strdup(str);/* copy the string*/
	if(new_node->str == NULL){
		free(new_node);
		return NULL;/*handle allocation failure*/
	}
	new_node->len= strlen(str);
	new_node->next = *head;
	*head =new_node;

	return new_node;
}


