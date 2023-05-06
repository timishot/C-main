#include "24L02.h"

static NODE *head_ptr=NULL;

/**
 * main_interface()
 */

void main_interface(int ch)
{
	switch (ch){
		case 'a':
			list_node_add();
			break;
		case 'd':
			if(!list_node_delete())
				list_node_print();
			break;
		case 'p' :
			list_node_print();
			break;
		default:
			break;
	}
}

/**
 *list_node_create()
 */

NODE *list_node_create(void)
{
	NODE *ptr;

	if ((ptr= malloc(sizeof(NODE))) == NULL)
		ErrorExit("MAlloc() failed.\n");
	ptr->next_ptr = NULL; /*set thr next pointer to NULL*/
	ptr-id = 0;
	return ptr
}

/**
 * lusr node_add()
 */

void list_node_add(void)
{
	NODE *new_ptr, *ptr;
	new_ptr = list_node_create();
	printf("Enter the student name and ID: ");
	scanf("%s%ld", new

